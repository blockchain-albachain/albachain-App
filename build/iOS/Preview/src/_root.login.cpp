// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/login.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseControlsNavigationControl_Active_Property.h>
#include <_root.albachain_FuseControlsTextInputControl_Value_Property.h>
#include <_root.albachain_FuseTriggersWhileBool_Value_Property.h>
#include <_root.login.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
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
static uString* STRINGS[41];
static uType* TYPES[8];

namespace g{

// public partial sealed class login :2
// {
// static login() :50
static void login__cctor_4_fn(uType* __type)
{
    ::g::albachain_bundle_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    login::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"page2Tab"*/], ::STRINGS[2/*"temp_eb1"*/], ::STRINGS[3/*"page1Tab"*/], ::STRINGS[4/*"temp_eb2"*/], ::STRINGS[5/*"temp_eb3"*/], ::STRINGS[6/*"temp_eb4"*/], ::STRINGS[7/*"navigation"*/], ::STRINGS[8/*"page1"*/], ::STRINGS[9/*"indisigninbtn"*/], ::STRINGS[10/*"temp_eb5"*/], ::STRINGS[11/*"indisignupbtn"*/], ::STRINGS[12/*"temp_eb6"*/], ::STRINGS[13/*"page2"*/], ::STRINGS[14/*"busigninbtn"*/], ::STRINGS[15/*"temp_eb7"*/], ::STRINGS[16/*"busignupbtn"*/], ::STRINGS[17/*"temp_eb8"*/]);
    login::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[18/*"Active"*/]);
    login::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[19/*"Value"*/]);
    login::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"page2Tab"*/]);
    login::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"page1Tab"*/]);
    login::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"navigation"*/]);
    login::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"page1"*/]);
    login::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"indisigninbtn"*/]);
    login::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"indisignupbtn"*/]);
    login::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[13/*"page2"*/]);
    login::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[14/*"busigninbtn"*/]);
    login::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[16/*"busignupbtn"*/]);
    login::RobotoMedium_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::RobotoMediuma3668f28()));
    ::g::Uno::UX::Resource::SetGlobalKey(login::RobotoMedium_, ::STRINGS[20/*"RobotoMedium"*/]);
}

static void login_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("page2Tab");
    ::STRINGS[2] = uString::Const("temp_eb1");
    ::STRINGS[3] = uString::Const("page1Tab");
    ::STRINGS[4] = uString::Const("temp_eb2");
    ::STRINGS[5] = uString::Const("temp_eb3");
    ::STRINGS[6] = uString::Const("temp_eb4");
    ::STRINGS[7] = uString::Const("navigation");
    ::STRINGS[8] = uString::Const("page1");
    ::STRINGS[9] = uString::Const("indisigninbtn");
    ::STRINGS[10] = uString::Const("temp_eb5");
    ::STRINGS[11] = uString::Const("indisignupbtn");
    ::STRINGS[12] = uString::Const("temp_eb6");
    ::STRINGS[13] = uString::Const("page2");
    ::STRINGS[14] = uString::Const("busigninbtn");
    ::STRINGS[15] = uString::Const("temp_eb7");
    ::STRINGS[16] = uString::Const("busignupbtn");
    ::STRINGS[17] = uString::Const("temp_eb8");
    ::STRINGS[18] = uString::Const("Active");
    ::STRINGS[19] = uString::Const("Value");
    ::STRINGS[20] = uString::Const("RobotoMedium");
    ::STRINGS[21] = uString::Const("busiChange");
    ::STRINGS[22] = uString::Const("indiChange");
    ::STRINGS[23] = uString::Const("loginColorChange");
    ::STRINGS[24] = uString::Const("individualID");
    ::STRINGS[25] = uString::Const("individualPW");
    ::STRINGS[26] = uString::Const("individualSignin");
    ::STRINGS[27] = uString::Const("individualSignup");
    ::STRINGS[28] = uString::Const("businessID");
    ::STRINGS[29] = uString::Const("businessPW");
    ::STRINGS[30] = uString::Const("businessSignin");
    ::STRINGS[31] = uString::Const("businessSignup");
    ::STRINGS[32] = uString::Const("Pages/login.ux");
    ::STRINGS[33] = uString::Const("Hello");
    ::STRINGS[34] = uString::Const("Stranger !");
    ::STRINGS[35] = uString::Const("\352\270\260\354\227\205\355\232\214\354\233\220");
    ::STRINGS[36] = uString::Const("\352\260\234\354\235\270\355\232\214\354\233\220");
    ::STRINGS[37] = uString::Const("User ID");
    ::STRINGS[38] = uString::Const("Password");
    ::STRINGS[39] = uString::Const("Log-in");
    ::STRINGS[40] = uString::Const("Sign-up");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::albachain_bundle_typeof(),
        ::g::Fuse::Font_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(login, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(login, temp4_Value_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(login, page2Tab), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb1), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(login, page1Tab), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb4), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(login, navigation), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(login, page1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(login, indisigninbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb5), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(login, indisignupbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb6), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(login, page2), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(login, busigninbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb7), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(login, busignupbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(login, temp_eb8), 0,
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
        new uField("RobotoMedium", 151));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)login__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* login_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 164;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
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

// public login(Fuse.Navigation.Router router) :56
void login__ctor_8_fn(login* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :62
void login__InitializeUX_fn(login* __this)
{
    __this->InitializeUX();
}

// public login New(Fuse.Navigation.Router router) :56
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

// public login(Fuse.Navigation.Router router) [instance] :56
void login::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("login", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :62
void login::InitializeUX()
{
    uStackFrame __("login", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, login::__g_static_nametable1_);
    navigation = ::g::Fuse::Controls::PageControl::New4();
    navigation_Active_inst = ::g::albachain_FuseControlsNavigationControl_Active_Property::New1(navigation, login::__selector0_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"busiChange"*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"indiChange"*/]);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::albachain_FuseTriggersWhileBool_Value_Property::New1(temp, login::__selector1_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[23/*"loginColorC...*/]);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[22/*"indiChange"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[21/*"busiChange"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp1, login::__selector1_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[24/*"individualID"*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp2, login::__selector1_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[25/*"individualPW"*/]);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[26/*"individualS...*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[27/*"individualS...*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp3, login::__selector1_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[28/*"businessID"*/]);
    ::g::Fuse::Controls::TextInput* temp4 = ::g::Fuse::Controls::TextInput::New3();
    temp4_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp4, login::__selector1_);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[29/*"businessPW"*/]);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[30/*"businessSig...*/]);
    ::g::Fuse::Reactive::Data* temp17 = ::g::Fuse::Reactive::Data::New1(::STRINGS[31/*"businessSig...*/]);
    ::g::Fuse::Reactive::JavaScript* temp18 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp19 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp20 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Circle* temp23 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    page2Tab = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp26 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp27 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp28 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    page1Tab = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp29 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp30 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp31 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp32 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp35 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp36 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp37 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp38 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp8);
    ::g::Fuse::Controls::Rectangle* temp39 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp40 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp41 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp42 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[1/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], navigation_Active_inst);
    ::g::Fuse::Triggers::Actions::Callback* temp43 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    ::g::Fuse::Controls::Shadow* temp44 = ::g::Fuse::Controls::Shadow::New2();
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::ClientPanel* temp45 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::StackPanel* temp46 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp47 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp48 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp51 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp52 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Rectangle* temp53 = ::g::Fuse::Controls::Rectangle::New3();
    indisigninbtn = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp54 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp55 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp56 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp57 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp58 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp59 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp12);
    ::g::Fuse::Controls::Panel* temp60 = ::g::Fuse::Controls::Panel::New3();
    indisignupbtn = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp61 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp62 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp63 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp64 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp65 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13);
    ::g::Fuse::Drawing::StaticSolidColor* temp66 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::ClientPanel* temp67 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::StackPanel* temp68 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp69 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp70 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp71 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::Rectangle* temp72 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp73 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp74 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp15, 3);
    ::g::Fuse::Controls::Rectangle* temp75 = ::g::Fuse::Controls::Rectangle::New3();
    busigninbtn = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp76 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp77 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp78 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp79 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp80 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp81 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp16);
    ::g::Fuse::Controls::Panel* temp82 = ::g::Fuse::Controls::Panel::New3();
    busignupbtn = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp83 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp84 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp85 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp86 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp87 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp17);
    ::g::Fuse::Drawing::StaticSolidColor* temp88 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp18->LineNumber(3);
    temp18->FileName(::STRINGS[32/*"Pages/login...*/]);
    temp18->SourceLineNumber(3);
    temp18->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp18->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::login637f13ff()));
    temp19->SourceLineNumber(7);
    temp19->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp20->SourceLineNumber(8);
    temp20->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), navigation);
    temp21->Value(::STRINGS[33/*"Hello"*/]);
    temp21->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp21->Alignment(0);
    temp21->Margin(::g::Uno::Float4__New2(50.0f, 100.0f, 0.0f, 0.0f));
    temp21->SourceLineNumber(9);
    temp21->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp22->Value(::STRINGS[34/*"Stranger !"*/]);
    temp22->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp22->Margin(::g::Uno::Float4__New2(50.0f, 0.0f, 0.0f, 0.0f));
    temp22->SourceLineNumber(10);
    temp22->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp23->Color(::g::Uno::Float4__New2(0.8901961f, 0.9098039f, 0.9019608f, 1.0f));
    temp23->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp23->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp23->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp23->SourceLineNumber(11);
    temp23->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp24->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp24->Color(::g::Uno::Float4__New2(0.9333333f, 0.9411765f, 0.9333333f, 1.0f));
    temp24->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp24->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp24->SourceLineNumber(14);
    temp24->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    temp->SourceLineNumber(15);
    temp->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    uPtr(page2Tab)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(page2Tab)->Color(::g::Uno::Float4__New2(0.3607843f, 0.6f, 0.7490196f, 1.0f));
    uPtr(page2Tab)->Width(::g::Uno::UX::Size__New1(110.0f, 1));
    uPtr(page2Tab)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(page2Tab)->Alignment(3);
    uPtr(page2Tab)->Name(login::__selector2_);
    uPtr(page2Tab)->SourceLineNumber(16);
    uPtr(page2Tab)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp25->Value(::STRINGS[35/*"기업회원"*/]);
    temp25->FontSize(12.0f);
    temp25->TextColor(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp25->Alignment(10);
    temp25->SourceLineNumber(17);
    temp25->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp25->Font(::g::Fuse::Font::Bold());
    temp26->SourceLineNumber(18);
    temp26->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp27, page2);
    temp27->SourceLineNumber(19);
    temp27->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp28->SourceLineNumber(20);
    temp28->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp28->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    temp5->SourceLineNumber(20);
    temp5->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(page1Tab)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(page1Tab)->Color(::g::Uno::Float4__New2(0.9333333f, 0.9411765f, 0.9333333f, 1.0f));
    uPtr(page1Tab)->Width(::g::Uno::UX::Size__New1(110.0f, 1));
    uPtr(page1Tab)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(page1Tab)->Alignment(1);
    uPtr(page1Tab)->Name(login::__selector3_);
    uPtr(page1Tab)->SourceLineNumber(23);
    uPtr(page1Tab)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1Tab)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp29->Value(::STRINGS[36/*"개인회원"*/]);
    temp29->FontSize(12.0f);
    temp29->TextColor(::g::Uno::Float4__New2(0.4f, 0.4039216f, 0.4f, 1.0f));
    temp29->Alignment(10);
    temp29->SourceLineNumber(24);
    temp29->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp29->Font(::g::Fuse::Font::Bold());
    temp30->SourceLineNumber(25);
    temp30->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp31, page1);
    temp31->SourceLineNumber(26);
    temp31->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp32->SourceLineNumber(27);
    temp32->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp32->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp6->SourceLineNumber(27);
    temp6->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp7->SourceLineNumber(15);
    temp7->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp34->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp34->Color(::g::Uno::Float4__New2(0.3607843f, 0.6f, 0.7490196f, 1.0f));
    temp34->Width(::g::Uno::UX::Size__New1(110.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp34->Alignment(1);
    temp34->SourceLineNumber(32);
    temp34->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp35->Value(::STRINGS[36/*"개인회원"*/]);
    temp35->FontSize(12.0f);
    temp35->TextColor(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp35->Alignment(10);
    temp35->SourceLineNumber(33);
    temp35->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp35->Font(::g::Fuse::Font::Bold());
    temp36->SourceLineNumber(34);
    temp36->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp37, page1);
    temp37->SourceLineNumber(35);
    temp37->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp38->SourceLineNumber(36);
    temp38->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp38->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp8->SourceLineNumber(36);
    temp8->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp39->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp39->Color(::g::Uno::Float4__New2(0.9333333f, 0.9411765f, 0.9333333f, 1.0f));
    temp39->Width(::g::Uno::UX::Size__New1(110.0f, 1));
    temp39->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp39->Alignment(3);
    temp39->SourceLineNumber(39);
    temp39->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    temp40->Value(::STRINGS[35/*"기업회원"*/]);
    temp40->FontSize(12.0f);
    temp40->TextColor(::g::Uno::Float4__New2(0.4f, 0.4039216f, 0.4f, 1.0f));
    temp40->Alignment(10);
    temp40->SourceLineNumber(40);
    temp40->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp40->Font(::g::Fuse::Font::Bold());
    temp41->SourceLineNumber(41);
    temp41->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp42, page2);
    temp42->SourceLineNumber(42);
    temp42->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp43->SourceLineNumber(43);
    temp43->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp43->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    temp9->SourceLineNumber(43);
    temp9->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp44->SourceLineNumber(46);
    temp44->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(navigation)->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 140.0f));
    uPtr(navigation)->Name(login::__selector4_);
    uPtr(navigation)->SourceLineNumber(49);
    uPtr(navigation)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(navigation)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), page2);
    uPtr(page1)->Name(login::__selector5_);
    uPtr(page1)->SourceLineNumber(50);
    uPtr(page1)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(page1)->Background(temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    temp45->SourceLineNumber(54);
    temp45->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp45->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp46->SourceLineNumber(55);
    temp46->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), indisigninbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp60);
    temp47->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp47->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp47->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp47->SourceLineNumber(57);
    temp47->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    temp48->Value(::STRINGS[37/*"User ID"*/]);
    temp48->FontSize(12.0f);
    temp48->TextColor(::g::Uno::Float4__New2(0.7647059f, 0.7686275f, 0.7647059f, 1.0f));
    temp48->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp48->Height(::g::Uno::UX::Size__New1(12.0f, 1));
    temp48->Alignment(4);
    temp48->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp48->SourceLineNumber(59);
    temp48->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp1->Alignment(0);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp1->SourceLineNumber(60);
    temp1->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp10->SourceLineNumber(60);
    temp10->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp50->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp50->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp50->Alignment(0);
    temp50->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    temp50->SourceLineNumber(61);
    temp50->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp50, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp50, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp50, 2);
    temp51->Value(::STRINGS[38/*"Password"*/]);
    temp51->FontSize(12.0f);
    temp51->TextColor(::g::Uno::Float4__New2(0.7647059f, 0.7686275f, 0.7647059f, 1.0f));
    temp51->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp51->Height(::g::Uno::UX::Size__New1(12.0f, 1));
    temp51->Alignment(0);
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 70.0f, 0.0f, 0.0f));
    temp51->SourceLineNumber(64);
    temp51->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp2->IsPassword(true);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->ActionStyle(5);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 95.0f, 0.0f, 0.0f));
    temp2->SourceLineNumber(65);
    temp2->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp2, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp52);
    temp11->SourceLineNumber(65);
    temp11->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp53->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp53->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp53->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp53->Alignment(12);
    temp53->Margin(::g::Uno::Float4__New2(0.0f, 110.0f, 0.0f, 0.0f));
    temp53->SourceLineNumber(66);
    temp53->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp53, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp53, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp53, 2);
    uPtr(indisigninbtn)->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(indisigninbtn)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(indisigninbtn)->Margin(::g::Uno::Float4__New2(0.0f, 100.0f, 0.0f, 0.0f));
    uPtr(indisigninbtn)->Name(login::__selector6_);
    uPtr(indisigninbtn)->SourceLineNumber(69);
    uPtr(indisigninbtn)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indisigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indisigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indisigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(indisigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    temp54->Value(::STRINGS[39/*"Log-in"*/]);
    temp54->FontSize(18.0f);
    temp54->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp54->Alignment(10);
    temp54->SourceLineNumber(70);
    temp54->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp54->Font(::g::Fuse::Font::Bold());
    temp55->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp55->Color(::g::Uno::Float4__New2(0.3490196f, 0.5960785f, 0.7529412f, 1.0f));
    temp55->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp55->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp55->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp55->SourceLineNumber(71);
    temp55->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp56->SourceLineNumber(72);
    temp56->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp57);
    temp57->Factor(0.9f);
    temp57->Duration(0.05);
    temp57->Target(indisigninbtn);
    temp58->SourceLineNumber(75);
    temp58->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp59->SourceLineNumber(76);
    temp59->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp59->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp12->SourceLineNumber(76);
    temp12->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp60->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp60->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp60->Alignment(0);
    temp60->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp60->SourceLineNumber(80);
    temp60->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), indisignupbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp60->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp64);
    uPtr(indisignupbtn)->Value(::STRINGS[40/*"Sign-up"*/]);
    uPtr(indisignupbtn)->FontSize(10.0f);
    uPtr(indisignupbtn)->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    uPtr(indisignupbtn)->Alignment(10);
    uPtr(indisignupbtn)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(indisignupbtn)->Name(login::__selector7_);
    uPtr(indisignupbtn)->SourceLineNumber(81);
    uPtr(indisignupbtn)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(indisignupbtn)->Font(login::RobotoMedium_);
    temp61->Alignment(0);
    temp61->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp61->SourceLineNumber(82);
    temp61->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp62->SourceLineNumber(83);
    temp62->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp63);
    temp63->Factor(0.9f);
    temp63->Duration(0.05);
    temp63->Target(indisignupbtn);
    temp64->SourceLineNumber(86);
    temp64->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp64->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp65->SourceLineNumber(87);
    temp65->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp65->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp13->SourceLineNumber(87);
    temp13->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(page2)->Name(login::__selector8_);
    uPtr(page2)->SourceLineNumber(97);
    uPtr(page2)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(page2)->Background(temp88);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    temp67->SourceLineNumber(101);
    temp67->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp68->SourceLineNumber(102);
    temp68->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), busigninbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp82);
    temp69->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp69->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp69->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp69->SourceLineNumber(104);
    temp69->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp75);
    temp70->Value(::STRINGS[37/*"User ID"*/]);
    temp70->FontSize(12.0f);
    temp70->TextColor(::g::Uno::Float4__New2(0.7647059f, 0.7686275f, 0.7647059f, 1.0f));
    temp70->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp70->Height(::g::Uno::UX::Size__New1(12.0f, 1));
    temp70->Alignment(4);
    temp70->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp70->SourceLineNumber(106);
    temp70->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp3->TextAlignment(0);
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp3->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp3->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp3->Alignment(0);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp3->SourceLineNumber(107);
    temp3->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp3, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp71);
    temp14->SourceLineNumber(107);
    temp14->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp72->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp72->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp72->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp72->Alignment(0);
    temp72->Margin(::g::Uno::Float4__New2(0.0f, 30.0f, 0.0f, 0.0f));
    temp72->SourceLineNumber(108);
    temp72->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp72, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp72, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp72, 2);
    temp73->Value(::STRINGS[38/*"Password"*/]);
    temp73->FontSize(12.0f);
    temp73->TextColor(::g::Uno::Float4__New2(0.7647059f, 0.7686275f, 0.7647059f, 1.0f));
    temp73->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp73->Height(::g::Uno::UX::Size__New1(12.0f, 1));
    temp73->Alignment(0);
    temp73->Margin(::g::Uno::Float4__New2(0.0f, 70.0f, 0.0f, 0.0f));
    temp73->SourceLineNumber(111);
    temp73->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp4->IsPassword(true);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp4->ActionStyle(5);
    temp4->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp4->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp4->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp4->Margin(::g::Uno::Float4__New2(0.0f, 95.0f, 0.0f, 0.0f));
    temp4->SourceLineNumber(112);
    temp4->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp4, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp4, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp74);
    temp15->SourceLineNumber(112);
    temp15->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp75->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp75->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp75->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp75->Alignment(12);
    temp75->Margin(::g::Uno::Float4__New2(0.0f, 110.0f, 0.0f, 0.0f));
    temp75->SourceLineNumber(113);
    temp75->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp75, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp75, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp75, 2);
    uPtr(busigninbtn)->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(busigninbtn)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(busigninbtn)->Margin(::g::Uno::Float4__New2(0.0f, 100.0f, 0.0f, 0.0f));
    uPtr(busigninbtn)->Name(login::__selector9_);
    uPtr(busigninbtn)->SourceLineNumber(116);
    uPtr(busigninbtn)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(busigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(busigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(busigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(busigninbtn)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp80);
    temp76->Value(::STRINGS[39/*"Log-in"*/]);
    temp76->FontSize(18.0f);
    temp76->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp76->Alignment(10);
    temp76->SourceLineNumber(117);
    temp76->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp76->Font(login::RobotoMedium_);
    temp77->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp77->Color(::g::Uno::Float4__New2(0.3490196f, 0.5960785f, 0.7529412f, 1.0f));
    temp77->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp77->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp77->SourceLineNumber(118);
    temp77->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp78->SourceLineNumber(119);
    temp78->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp79);
    temp79->Factor(0.9f);
    temp79->Duration(0.05);
    temp79->Target(busigninbtn);
    temp80->SourceLineNumber(122);
    temp80->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp80->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp81->SourceLineNumber(123);
    temp81->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp81->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    temp16->SourceLineNumber(123);
    temp16->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp82->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp82->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp82->Alignment(0);
    temp82->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp82->SourceLineNumber(127);
    temp82->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), busignupbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp82->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    uPtr(busignupbtn)->Value(::STRINGS[40/*"Sign-up"*/]);
    uPtr(busignupbtn)->FontSize(10.0f);
    uPtr(busignupbtn)->Color(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    uPtr(busignupbtn)->Alignment(10);
    uPtr(busignupbtn)->Name(login::__selector10_);
    uPtr(busignupbtn)->SourceLineNumber(128);
    uPtr(busignupbtn)->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(busignupbtn)->Font(login::RobotoMedium_);
    temp83->Alignment(0);
    temp83->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp83->SourceLineNumber(129);
    temp83->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp84->SourceLineNumber(130);
    temp84->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp84->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp85);
    temp85->Factor(0.9f);
    temp85->Duration(0.05);
    temp85->Target(busignupbtn);
    temp86->SourceLineNumber(133);
    temp86->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    temp87->SourceLineNumber(134);
    temp87->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    temp87->add_Handler(uDelegate::New(::TYPES[5/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    temp17->SourceLineNumber(134);
    temp17->SourceFileName(::STRINGS[32/*"Pages/login...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page2Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page1Tab);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), navigation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), indisigninbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), indisignupbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), busigninbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), busignupbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
}

// public login New(Fuse.Navigation.Router router) [static] :56
login* login::New5(::g::Fuse::Navigation::Router* router1)
{
    login* obj1 = (login*)uNew(login_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
