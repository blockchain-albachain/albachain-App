// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/login.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseControlsNavigationControl_Active_Property.h>
#include <_root.albachain_FuseControlsTextInputControl_Value_Property.h>
#include <_root.albachain_FuseElementsElement_ElementLayoutMaster_Property.h>
#include <_root.login.h>
#include <_root.Tab.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[33];
static uType* TYPES[9];

namespace g{

// public partial sealed class login :2
// {
// static login() :40
static void login__cctor_4_fn(uType* __type)
{
    ::g::albachain_bundle_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    login::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"indicator"*/], ::STRINGS[2/*"page1Tab"*/], ::STRINGS[3/*"page2Tab"*/], ::STRINGS[4/*"navigation"*/], ::STRINGS[5/*"page1"*/], ::STRINGS[6/*"loginArea1"*/], ::STRINGS[7/*"temp_eb0"*/], ::STRINGS[8/*"temp_eb1"*/], ::STRINGS[9/*"page2"*/], ::STRINGS[10/*"loginArea2"*/], ::STRINGS[11/*"temp_eb2"*/], ::STRINGS[12/*"temp_eb3"*/]);
    login::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Active"*/]);
    login::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"Element.Lay...*/]);
    login::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Value"*/]);
    login::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"indicator"*/]);
    login::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"page1Tab"*/]);
    login::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"page2Tab"*/]);
    login::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"navigation"*/]);
    login::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"page1"*/]);
    login::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"loginArea1"*/]);
    login::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"page2"*/]);
    login::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"loginArea2"*/]);
    login::RobotoMedium_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::RobotoMediumeb2239d0()));
    ::g::Uno::UX::Resource::SetGlobalKey(login::RobotoMedium_, ::STRINGS[16/*"RobotoMedium"*/]);
}

static void login_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("indicator");
    ::STRINGS[2] = uString::Const("page1Tab");
    ::STRINGS[3] = uString::Const("page2Tab");
    ::STRINGS[4] = uString::Const("navigation");
    ::STRINGS[5] = uString::Const("page1");
    ::STRINGS[6] = uString::Const("loginArea1");
    ::STRINGS[7] = uString::Const("temp_eb0");
    ::STRINGS[8] = uString::Const("temp_eb1");
    ::STRINGS[9] = uString::Const("page2");
    ::STRINGS[10] = uString::Const("loginArea2");
    ::STRINGS[11] = uString::Const("temp_eb2");
    ::STRINGS[12] = uString::Const("temp_eb3");
    ::STRINGS[13] = uString::Const("Active");
    ::STRINGS[14] = uString::Const("Element.LayoutMaster");
    ::STRINGS[15] = uString::Const("Value");
    ::STRINGS[16] = uString::Const("RobotoMedium");
    ::STRINGS[17] = uString::Const("individualID");
    ::STRINGS[18] = uString::Const("individualPW");
    ::STRINGS[19] = uString::Const("individualSignin");
    ::STRINGS[20] = uString::Const("individualSignup");
    ::STRINGS[21] = uString::Const("businessID");
    ::STRINGS[22] = uString::Const("businessPW");
    ::STRINGS[23] = uString::Const("businessSignin");
    ::STRINGS[24] = uString::Const("businessSignup");
    ::STRINGS[25] = uString::Const("Pages/login.ux");
    ::STRINGS[26] = uString::Const("\352\260\234\354\235\270\355\232\214\354\233\220");
    ::STRINGS[27] = uString::Const("\352\270\260\354\227\205\355\232\214\354\233\220");
    ::STRINGS[28] = uString::Const("auto,1*");
    ::STRINGS[29] = uString::Const("Username");
    ::STRINGS[30] = uString::Const("Password");
    ::STRINGS[31] = uString::Const("Log IN");
    ::STRINGS[32] = uString::Const("Sign UP");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::albachain_bundle_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Triggers::LayoutTransition_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(login, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(login, navigation_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Element_typeof(), NULL), offsetof(login, indicator_Element_LayoutMaster_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp3_Value_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(login, indicator), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(login, page1Tab), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(login, page2Tab), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(login, navigation), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(login, page1), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(login, loginArea1), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(login, page2), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(login, loginArea2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb3), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(login, __g_nametable1), 0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&login::RobotoMedium_, uFieldFlagsStatic,
        ::TYPES[0/*string[]*/], (uintptr_t)&login::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&login::__selector10_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("RobotoMedium", 146));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)login__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* login_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 159;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(login);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("login", options);
    type->fp_build_ = login_build;
    type->fp_cctor_ = login__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public login(Fuse.Navigation.Router router) :46
void login__ctor_8_fn(login* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :52
void login__InitializeUX_fn(login* __this)
{
    __this->InitializeUX();
}

// public login New(Fuse.Navigation.Router router) :46
void login__New5_fn(::g::Fuse::Navigation::Router* router1, login** __retval)
{
    *__retval = login::New5(router1);
}

uSStrong< ::g::Fuse::Font*> login::RobotoMedium_;
uSStrong<uArray*> login::__g_static_nametable1_;
::g::Uno::UX::Selector login::__selector0_;
::g::Uno::UX::Selector login::__selector1_;
::g::Uno::UX::Selector login::__selector2_;
::g::Uno::UX::Selector login::__selector3_;
::g::Uno::UX::Selector login::__selector4_;
::g::Uno::UX::Selector login::__selector5_;
::g::Uno::UX::Selector login::__selector6_;
::g::Uno::UX::Selector login::__selector7_;
::g::Uno::UX::Selector login::__selector8_;
::g::Uno::UX::Selector login::__selector9_;
::g::Uno::UX::Selector login::__selector10_;

// public login(Fuse.Navigation.Router router) [instance] :46
void login::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("login", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :52
void login::InitializeUX()
{
    uStackFrame __("login", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, login::__g_static_nametable1_);
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::albachain_FuseControlsNavigationControl_Active_Property::New1(navigation, login::__selector0_);
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Element_LayoutMaster_inst = ::g::albachain_FuseElementsElement_ElementLayoutMaster_Property::New1(indicator, login::__selector1_);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp, login::__selector2_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[17/*"individualID"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp1, login::__selector2_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[18/*"individualPW"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"individualS...*/]);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[20/*"individualS...*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp2, login::__selector2_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"businessID"*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp3, login::__selector2_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"businessPW"*/]);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"businessSig...*/]);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"businessSig...*/]);
    ::g::Fuse::Reactive::JavaScript* temp12 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Triggers::LayoutAnimation* temp13 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp14 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::DockPanel* temp15 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp16 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp17 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Controls::Grid* temp18 = ::g::Fuse::Controls::Grid::New4();
    page1Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp19 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp20 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp21 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    page2Tab = ::g::Fuse::Controls::Panel::New3();
    ::g::Tab* temp22 = ::g::Tab::New4();
    ::g::Fuse::Gestures::Clicked* temp23 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp24 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp25 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7411765f, 0.7647059f, 0.7803922f, 1.0f));
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp26 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp27 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Panel* temp28 = ::g::Fuse::Controls::Panel::New3();
    loginArea1 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Controls::Rectangle* temp32 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp33 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp34 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp36 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp37 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Controls::Panel* temp38 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp39 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp41 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp42 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ::g::Fuse::Drawing::StaticSolidColor* temp43 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::WhileActive* temp44 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp45 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<Fuse.Elements.Element>*/], indicator_Element_LayoutMaster_inst);
    ::g::Fuse::Controls::Panel* temp46 = ::g::Fuse::Controls::Panel::New3();
    loginArea2 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp47 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Rectangle* temp48 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Panel* temp51 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp52 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp54 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp55 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10);
    ::g::Fuse::Controls::Panel* temp56 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp57 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp58 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp59 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp60 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp11);
    ::g::Fuse::Drawing::StaticSolidColor* temp61 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp12->LineNumber(3);
    temp12->FileName(::STRINGS[25/*"Pages/login...*/]);
    temp12->SourceLineNumber(3);
    temp12->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp12->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::login30c4c83e()));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(0.007843138f, 0.1490196f, 0.7803922f, 1.0f));
    uPtr(indicator)->Height(::g::Uno::UX::Size__New1(4.0f, 1));
    uPtr(indicator)->Alignment(12);
    uPtr(indicator)->Name(login::__selector3_);
    uPtr(indicator)->SourceLineNumber(12);
    uPtr(indicator)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indicator)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->SourceLineNumber(13);
    temp13->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp14);
    temp14->X(1.0f);
    temp14->Duration(0.4);
    temp14->RelativeTo(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange());
    temp14->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp15->SourceLineNumber(20);
    temp15->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    temp16->SourceLineNumber(21);
    temp16->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp16, 2);
    temp17->SourceLineNumber(22);
    temp17->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 3);
    temp18->ColumnCount(2);
    temp18->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp18->Alignment(6);
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 70.0f, 0.0f, 0.0f));
    temp18->SourceLineNumber(24);
    temp18->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 2);
    temp18->Background(temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page2Tab);
    uPtr(page1Tab)->Name(login::__selector4_);
    uPtr(page1Tab)->SourceLineNumber(25);
    uPtr(page1Tab)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1Tab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Text(::STRINGS[26/*"개인회원"*/]);
    temp19->SourceLineNumber(26);
    temp19->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp20->SourceLineNumber(27);
    temp20->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp21);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp21, page1);
    temp21->SourceLineNumber(28);
    temp21->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    uPtr(page2Tab)->Name(login::__selector5_);
    uPtr(page2Tab)->SourceLineNumber(32);
    uPtr(page2Tab)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2Tab)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp22->Text(::STRINGS[27/*"기업회원"*/]);
    temp22->SourceLineNumber(33);
    temp22->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp23->SourceLineNumber(34);
    temp23->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp24);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp24, page2);
    temp24->SourceLineNumber(35);
    temp24->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    uPtr(navigation)->Name(login::__selector6_);
    uPtr(navigation)->SourceLineNumber(42);
    uPtr(navigation)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), page2);
    uPtr(page1)->Name(login::__selector7_);
    uPtr(page1)->SourceLineNumber(43);
    uPtr(page1)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    uPtr(page1)->Background(temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp26->Threshold(0.5f);
    temp26->SourceLineNumber(44);
    temp26->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp27, page1Tab);
    temp27->SourceLineNumber(45);
    temp27->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp28->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp28->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp28->Y(::g::Uno::UX::Size__New1(220.0f, 1));
    temp28->SourceLineNumber(47);
    temp28->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea1);
    uPtr(loginArea1)->RowCount(2);
    uPtr(loginArea1)->Columns(::STRINGS[28/*"auto,1*"*/]);
    uPtr(loginArea1)->Height(::g::Uno::UX::Size__New1(160.0f, 1));
    uPtr(loginArea1)->MaxWidth(::g::Uno::UX::Size__New1(400.0f, 1));
    uPtr(loginArea1)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(loginArea1)->Name(login::__selector8_);
    uPtr(loginArea1)->SourceLineNumber(48);
    uPtr(loginArea1)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(loginArea1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea1)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp->PlaceholderText(::STRINGS[29/*"Username"*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp->SourceLineNumber(50);
    temp->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp4->SourceLineNumber(50);
    temp4->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp30->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp30->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp30->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp30->Alignment(12);
    temp30->SourceLineNumber(51);
    temp30->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp30, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp30, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp30, 2);
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[30/*"Password"*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp1->SourceLineNumber(54);
    temp1->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    temp5->SourceLineNumber(54);
    temp5->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp32->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp32->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp32->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp32->Alignment(12);
    temp32->SourceLineNumber(55);
    temp32->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp32, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp32, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp32, 2);
    temp33->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp33->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp33->Y(::g::Uno::UX::Size__New1(330.0f, 1));
    temp33->SourceLineNumber(59);
    temp33->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp34->Value(::STRINGS[31/*"Log IN"*/]);
    temp34->FontSize(20.0f);
    temp34->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp34->Alignment(10);
    temp34->SourceLineNumber(60);
    temp34->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp34->Font(login::RobotoMedium_);
    temp35->Color(::g::Uno::Float4__New2(0.3607843f, 0.6705883f, 0.9960784f, 1.0f));
    temp35->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp35->SourceLineNumber(61);
    temp35->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp36->SourceLineNumber(62);
    temp36->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp37->SourceLineNumber(63);
    temp37->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp37->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp6->SourceLineNumber(63);
    temp6->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp38->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp38->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp38->Y(::g::Uno::UX::Size__New1(430.0f, 1));
    temp38->SourceLineNumber(69);
    temp38->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp39->Value(::STRINGS[32/*"Sign UP"*/]);
    temp39->FontSize(10.0f);
    temp39->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp39->Alignment(10);
    temp39->SourceLineNumber(70);
    temp39->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp39->Font(login::RobotoMedium_);
    temp40->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp40->Alignment(0);
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp40->SourceLineNumber(71);
    temp40->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp41->SourceLineNumber(72);
    temp41->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp42->SourceLineNumber(73);
    temp42->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp42->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp7->SourceLineNumber(73);
    temp7->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    uPtr(page2)->Name(login::__selector9_);
    uPtr(page2)->SourceLineNumber(78);
    uPtr(page2)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    uPtr(page2)->Background(temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    temp44->Threshold(0.5f);
    temp44->SourceLineNumber(79);
    temp44->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp45);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp45, page2Tab);
    temp45->SourceLineNumber(80);
    temp45->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp46->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp46->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp46->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp46->Y(::g::Uno::UX::Size__New1(220.0f, 1));
    temp46->SourceLineNumber(82);
    temp46->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea2);
    uPtr(loginArea2)->RowCount(2);
    uPtr(loginArea2)->Columns(::STRINGS[28/*"auto,1*"*/]);
    uPtr(loginArea2)->Height(::g::Uno::UX::Size__New1(160.0f, 1));
    uPtr(loginArea2)->MaxWidth(::g::Uno::UX::Size__New1(400.0f, 1));
    uPtr(loginArea2)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(loginArea2)->Name(login::__selector10_);
    uPtr(loginArea2)->SourceLineNumber(83);
    uPtr(loginArea2)->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(loginArea2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea2)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp2->PlaceholderText(::STRINGS[29/*"Username"*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp2->SourceLineNumber(85);
    temp2->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp2, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp47);
    temp8->SourceLineNumber(85);
    temp8->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp48->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp48->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp48->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp48->Alignment(12);
    temp48->SourceLineNumber(86);
    temp48->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp48, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp48, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp48, 2);
    temp3->IsPassword(true);
    temp3->PlaceholderText(::STRINGS[30/*"Password"*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    temp3->SourceLineNumber(89);
    temp3->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp3, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp9->SourceLineNumber(89);
    temp9->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp50->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp50->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp50->Alignment(12);
    temp50->SourceLineNumber(90);
    temp50->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp50, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp50, 2);
    temp51->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp51->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp51->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp51->Y(::g::Uno::UX::Size__New1(330.0f, 1));
    temp51->SourceLineNumber(94);
    temp51->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp51->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp52->Value(::STRINGS[31/*"Log IN"*/]);
    temp52->FontSize(20.0f);
    temp52->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp52->Alignment(10);
    temp52->SourceLineNumber(95);
    temp52->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp52->Font(login::RobotoMedium_);
    temp53->Color(::g::Uno::Float4__New2(0.3607843f, 0.6705883f, 0.9960784f, 1.0f));
    temp53->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp53->SourceLineNumber(96);
    temp53->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp54->SourceLineNumber(97);
    temp54->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp55->SourceLineNumber(98);
    temp55->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp55->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp10->SourceLineNumber(98);
    temp10->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp56->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp56->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp56->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp56->Y(::g::Uno::UX::Size__New1(430.0f, 1));
    temp56->SourceLineNumber(104);
    temp56->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    temp57->Value(::STRINGS[32/*"Sign UP"*/]);
    temp57->FontSize(10.0f);
    temp57->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp57->Alignment(10);
    temp57->SourceLineNumber(105);
    temp57->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp57->Font(login::RobotoMedium_);
    temp58->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp58->Alignment(0);
    temp58->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp58->SourceLineNumber(106);
    temp58->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp59->SourceLineNumber(107);
    temp59->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp60->SourceLineNumber(108);
    temp60->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    temp60->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp11->SourceLineNumber(108);
    temp11->SourceFileName(::STRINGS[25/*"Pages/login...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), loginArea1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), loginArea2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
}

// public login New(Fuse.Navigation.Router router) [static] :46
login* login::New5(::g::Fuse::Navigation::Router* router1)
{
    login* obj1 = (login*)uNew(login_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
