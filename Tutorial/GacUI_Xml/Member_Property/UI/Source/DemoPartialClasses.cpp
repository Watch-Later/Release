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

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->myControl)->GetText();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::WString>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->myControl)->SetText(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnf2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_::__vwsnf2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_(::demo::MyControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const
	{
		::vl::__vwsn::This(__vwsnthis_0->self)->SetSelectedOption(::vl::WString::Unmanaged(L"A"));
	}

	//-------------------------------------------------------------------

	__vwsnf3_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_::__vwsnf3_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_(::demo::MyControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf3_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const
	{
		::vl::__vwsn::This(__vwsnthis_0->self)->SetSelectedOption(::vl::WString::Unmanaged(L"B"));
	}

	//-------------------------------------------------------------------

	__vwsnf4_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_::__vwsnf4_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_(::demo::MyControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf4_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_0)->GetText();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::WString>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_0)->SetText(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::demo::MyControl*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = (::vl::WString::Unmanaged(L"Selected: ") + ::vl::__vwsn::This(__vwsn_bind_cache_0)->GetSelectedOption());
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0()
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->myControl; } catch(...){ return static_cast<::demo::MyControl*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->SelectedOptionChanged, ::vl::Func<void()>(this, &__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->SelectedOptionChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::demo::MyControl*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

	//-------------------------------------------------------------------

	__vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription::__vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription(::demo::MyControlConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::demo::MyControl*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::__vwsn::This(__vwsn_bind_cache_0)->GetText();
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->self; } catch(...){ return static_cast<::demo::MyControl*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, ::vl::Func<void(::vl::presentation::compositions::GuiGraphicsComposition*, ::vl::presentation::compositions::GuiEventArgs*)>(this, &__vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::demo::MyControl*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->__vwsn_precompile_0 = __vwsn_this_);
		(this->__vwsn_precompile_2 = ::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetText(::vl::WString::Unmanaged(L"Member_Property"));
		}
		(this->myControl = new ::demo::MyControl());
		(this->__vwsn_precompile_1 = ::vl::__vwsn::This(this->myControl)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(10); __vwsn_temp__.top = static_cast<::vl::vint>(10); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->AddChild(static_cast<::vl::presentation::controls::GuiControl*>(this->myControl));
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: myControl(static_cast<::demo::MyControl*>(nullptr))
		, __vwsn_precompile_0(static_cast<::demo::MainWindow*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
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

/***********************************************************************
Class (::demo::MyControlConstructor)
***********************************************************************/

	void MyControlConstructor::__vwsn_demo_MyControl_Initialize(::demo::MyControl* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		(this->__vwsn_precompile_7 = ::vl::__vwsn::This(this->self)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_7)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		(this->optionGroup = new ::vl::presentation::controls::GuiSelectableButton::MutexGroupController());
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->optionGroup));
		}
		{
			(this->__vwsn_precompile_0 = new ::vl::presentation::controls::GuiControl(::vl::presentation::theme::ThemeName::GroupBox));
		}
		(this->__vwsn_precompile_6 = ::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiStackComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetPadding(static_cast<::vl::vint>(10));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetDirection(::vl::presentation::compositions::GuiStackComposition::Direction::Vertical);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(5); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = static_cast<::vl::vint>(5); __vwsn_temp__.bottom = static_cast<::vl::vint>(5); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_2 = new ::vl::presentation::compositions::GuiStackItemComposition());
		{
			(this->__vwsn_precompile_3 = new ::vl::presentation::controls::GuiSelectableButton(::vl::presentation::theme::ThemeName::RadioButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetSelected(true);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetText(::vl::WString::Unmanaged(L"Option A"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_3)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_2));
		}
		(this->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiStackItemComposition());
		{
			(this->__vwsn_precompile_5 = new ::vl::presentation::controls::GuiSelectableButton(::vl::presentation::theme::ThemeName::RadioButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetText(::vl::WString::Unmanaged(L"Option B"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_5)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_4));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		{
			::vl::__vwsn::This(this->self)->AddChild(this->__vwsn_precompile_0);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetGroupController(static_cast<::vl::presentation::controls::GuiSelectableButton::GroupController*>(this->optionGroup));
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->__vwsn_precompile_3)->SelectedChanged, __vwsn_event_handler_);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetGroupController(static_cast<::vl::presentation::controls::GuiSelectableButton::GroupController*>(this->optionGroup));
		}
		{
			auto __vwsn_event_handler_ = LAMBDA(::vl_workflow_global::__vwsnf3_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->__vwsn_precompile_5)->SelectedChanged, __vwsn_event_handler_);
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc2_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, LAMBDA(::vl_workflow_global::__vwsnf4_Demo_demo_MyControlConstructor___vwsn_demo_MyControl_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
	}

	MyControlConstructor::MyControlConstructor()
		: self(static_cast<::demo::MyControl*>(nullptr))
		, optionGroup(static_cast<::vl::presentation::controls::GuiSelectableButton::MutexGroupController*>(nullptr))
		, __vwsn_precompile_0(static_cast<::vl::presentation::controls::GuiControl*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiStackComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::compositions::GuiStackItemComposition*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::controls::GuiSelectableButton*>(nullptr))
		, __vwsn_precompile_4(static_cast<::vl::presentation::compositions::GuiStackItemComposition*>(nullptr))
		, __vwsn_precompile_5(static_cast<::vl::presentation::controls::GuiSelectableButton*>(nullptr))
		, __vwsn_precompile_6(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
		, __vwsn_precompile_7(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MyControl)
***********************************************************************/

	::vl::WString MyControl::GetSelectedOption()
	{
		return this->__vwsn_prop_SelectedOption;
	}
	void MyControl::SetSelectedOption(const ::vl::WString& __vwsn_value_)
	{
		if ((this->__vwsn_prop_SelectedOption != __vwsn_value_))
		{
			(this->__vwsn_prop_SelectedOption = __vwsn_value_);
			::vl::__vwsn::EventInvoke(this->SelectedOptionChanged)();
		}
	}

	MyControl::MyControl()
		: ::vl::presentation::controls::GuiCustomControl(::vl::presentation::theme::ThemeName::CustomControl)
		, __vwsn_prop_SelectedOption(::vl::WString::Unmanaged(L"A"))
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::MyControl"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MyControl_Initialize(this);
	}

	MyControl::~MyControl()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiCustomControl*>(this));
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
