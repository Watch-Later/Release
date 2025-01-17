﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, DemoReflection.h) */
#include "DemoReflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()

/* USER_CONTENT_BEGIN(custom global declarations) */
/* USER_CONTENT_END() */

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

namespace demo
{
	bool MainWindow::CanCloseFile()
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		if (textBox->GetModified())
		{
			switch (dialogQueryClose->ShowDialog())
			{
			case INativeDialogService::MessageBoxButtonsOutput::SelectYes:
				return SaveFile(false);
			case INativeDialogService::MessageBoxButtonsOutput::SelectNo:
				return true;
			default:
				return false;
			}
		}
		else
		{
			return true;
		}
	}/* USER_CONTENT_END() */

	bool MainWindow::LoadFile(const ::vl::WString& path)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		stream::FileStream fileStream(path, stream::FileStream::ReadOnly);
		if (fileStream.IsAvailable())
		{
			stream::BomDecoder decoder;
			stream::DecoderStream decoderStream(fileStream, decoder);
			stream::StreamReader reader(decoderStream);
			textBox->SetText(reader.ReadToEnd());
			textBox->Select(TextPos(), TextPos());
			textBox->SetFocus();
			textBox->ClearUndoRedo();

			fileName = dialogOpen->GetFileName();
			if (INVLOC.EndsWith(fileName, L".xml", Locale::IgnoreCase))
			{
				SetupXmlConfig();
			}
			else
			{
				SetupTextConfig();
			}

			GetApplication()->InvokeInMainThread(this, [=]()
			{
				AddRecentFile(path);
			});
			return true;
		}
		else
		{
			return false;
		}
	}/* USER_CONTENT_END() */

	bool MainWindow::OpenFile(::vl::vint filterIndex)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		if (CanCloseFile())
		{
			dialogOpen->SetFilterIndex(filterIndex);
			if (dialogOpen->ShowDialog())
			{
				if (LoadFile(dialogOpen->GetFileName()))
				{
					return true;
				}
				else
				{
					dialogCannotOpen->ShowDialog();
				}
			}
		}
		return false;
	}/* USER_CONTENT_END() */

	bool MainWindow::SaveFile(bool saveAs)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		WString targetFileName = fileName;
		if (saveAs || targetFileName == L"")
		{
			dialogSave->SetFilterIndex(isXml ? 1 : 0);
			if (dialogSave->ShowDialog())
			{
				targetFileName = dialogSave->GetFileName();
			}
			else
			{
				return false;
			}
		}

		stream::FileStream fileStream(targetFileName, stream::FileStream::WriteOnly);
		if (fileStream.IsAvailable())
		{
			stream::BomEncoder encoder(stream::BomEncoder::Utf16);
			stream::EncoderStream encoderStream(fileStream, encoder);
			stream::StreamWriter writer(encoderStream);
			writer.WriteString(textBox->GetText());
			textBox->NotifyModificationSaved();

			fileName = targetFileName;
			if (INVLOC.EndsWith(fileName, L".xml", Locale::IgnoreCase))
			{
				SetupXmlConfig();
			}
			else
			{
				SetupTextConfig();
			}

			GetApplication()->InvokeInMainThread(this, [=]()
			{
				AddRecentFile(targetFileName);
			});
			return true;
		}
		else
		{
			dialogCannotSave->ShowDialog();
		}
		return false;
	}/* USER_CONTENT_END() */

	void MainWindow::SetupTextConfig()
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		if (isXml == true)
		{
			isXml = false;
			SetColorizer(textBox, false);
		}
	}/* USER_CONTENT_END() */

	void MainWindow::SetupXmlConfig()
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		if (isXml == false)
		{
			isXml = true;
			SetColorizer(textBox, true);
		}
	}/* USER_CONTENT_END() */

	void MainWindow::AddRecentFile(const ::vl::WString& path)
	{
		{
			auto __vwsn_for_begin_i = static_cast<::vl::vint>(0);
			auto __vwsn_for_end_i = (::vl::__vwsn::This(this->recentFiles.Obj())->GetCount() - static_cast<::vl::vint>(1));
			auto i = __vwsn_for_begin_i;
			while ((i <= __vwsn_for_end_i))
			{
				{
					if ((::vl::__vwsn::This(::vl::__vwsn::Unbox<::vl::presentation::controls::GuiToolstripCommand*>(::vl::__vwsn::This(this->recentFiles.Obj())->Get(i)))->GetText() == path))
					{
						auto existingCommand = ::vl::__vwsn::Unbox<::vl::presentation::controls::GuiToolstripCommand*>(::vl::__vwsn::This(this->recentFiles.Obj())->Get(i));
						::vl::__vwsn::This(this->recentFiles.Obj())->RemoveAt(i);
						::vl::__vwsn::This(this->recentFiles.Obj())->Insert(static_cast<::vl::vint>(0), ::vl::__vwsn::Box(existingCommand));
						return;
					}
				}
				(i = (i + static_cast<::vl::vint>(1)));
			}
		}
		if ((::vl::__vwsn::This(this->recentFiles.Obj())->GetCount() == static_cast<::vl::vint>(10)))
		{
			::vl::__vwsn::This(this->recentFiles.Obj())->RemoveAt(static_cast<::vl::vint>(9));
		}
		auto command = new ::vl::presentation::controls::GuiToolstripCommand();
		::vl::__vwsn::This(command)->SetText(path);
		::vl::__vwsn::EventAttach(::vl::__vwsn::This(command)->Executed, vl::Func(::vl_workflow_global::__vwsnf32_Demo_demo_MainWindow_AddRecentFile_(path, this)));
		::vl::__vwsn::This(this->recentFiles.Obj())->Insert(static_cast<::vl::vint>(0), ::vl::__vwsn::Box(command));
	}

	void MainWindow::commandFileNewText_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		if (CanCloseFile())
		{
			textBox->SetText(L"");
			textBox->ClearUndoRedo();
			SetupTextConfig();
		}
	}/* USER_CONTENT_END() */

	void MainWindow::commandFileNewXml_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		if (CanCloseFile())
		{
			textBox->SetText(L"");
			textBox->ClearUndoRedo();
			SetupXmlConfig();
		}
	}/* USER_CONTENT_END() */

	void MainWindow::commandFileOpen_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		OpenFile(dialogOpen->GetFilterIndex());
	}/* USER_CONTENT_END() */

	void MainWindow::commandFileOpenText_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		OpenFile(0);
	}/* USER_CONTENT_END() */

	void MainWindow::commandFileOpenXml_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		OpenFile(1);
	}/* USER_CONTENT_END() */

	void MainWindow::commandFileSave_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		SaveFile(false);
	}/* USER_CONTENT_END() */

	void MainWindow::commandFileSaveAs_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		SaveFile(true);
	}/* USER_CONTENT_END() */

	void MainWindow::commandFileExit_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		Close();
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditUndo_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		textBox->Undo();
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditRedo_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		textBox->Redo();
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditCut_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		textBox->Cut();
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditCopy_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		textBox->Copy();
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditPaste_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		textBox->Paste();
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditDelete_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		textBox->SetSelectionText(L"");
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditSelect_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		textBox->SelectAll();
	}/* USER_CONTENT_END() */

	void MainWindow::commandEditFind_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		if (!findWindow)
		{
			auto window = Ptr(new FindWindow);
			window->textBox = textBox;
			window->MoveToScreenCenter();
			window->GetNativeWindow()->SetParent(GetNativeWindow());
			findWindow = window;
		}
		findWindow->Show();
	}/* USER_CONTENT_END() */

	void MainWindow::commandAbout_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		auto window = new AboutWindow;
		window->MoveToScreenCenter();
		window->ShowModalAndDelete(this, []() {});
	}/* USER_CONTENT_END() */

	void MainWindow::window_Closing(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiRequestEventArgs* arguments)
	{/* USER_CONTENT_BEGIN(::demo::MainWindow) */
		arguments->cancel = !CanCloseFile();
	}/* USER_CONTENT_END() */

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
		, fileName(::vl::WString::Unmanaged(L""))
		, isXml(false)
		, findWindow(::vl::Ptr<::vl::presentation::controls::GuiWindow>())
		, recentFiles(::vl::reflection::description::IValueObservableList::Create())
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::MainWindow"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MainWindow_Initialize(this);
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControlHost*>(this));
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
