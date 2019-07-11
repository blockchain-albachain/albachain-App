// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/mainviewInd.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseControlsShadow_Color_Property.h>
#include <_root.albachain_FuseElementsElement_Opacity_Property.h>
#include <_root.albachain_FuseReactiveEach_Items_Property.h>
#include <_root.albachain_FuseTriggersWhileBool_Value_Property.h>
#include <_root.mainviewInd.h>
#include <_root.mainviewInd.Template.h>
#include <_root.mainviewInd.Template1.h>
#include <_root.profileInd.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EdgeNavigator.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.ScrollViewLayoutMode.h>
#include <Fuse.Controls.ScrollViewPager.h>
#include <Fuse.Controls.ScrollViewPager.ScrollViewPagerHandler.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.EdgeNavigation.h>
#include <Fuse.Navigation.NavigateToggle.h>
#include <Fuse.Navigation.NavigationEdge.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InstanceReuse.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class mainviewInd :2
// {
// static mainviewInd() :214
static void mainviewInd__cctor_4_fn(uType* __type)
{
    mainviewInd::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 10, uString::Const("router"), uString::Const("sidebar"), uString::Const("shadow"), uString::Const("sidebarFade"), uString::Const("titleText"), uString::Const("theEach"), uString::Const("gocontractbtn"), uString::Const("temp_eb42"), uString::Const("svp"), uString::Const("temp_eb43"));
    mainviewInd::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    mainviewInd::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    mainviewInd::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    mainviewInd::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    mainviewInd::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sidebar"));
    mainviewInd::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("shadow"));
    mainviewInd::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sidebarFade"));
    mainviewInd::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("titleText"));
    mainviewInd::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("theEach"));
    mainviewInd::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("gocontractbtn"));
    mainviewInd::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("svp"));
}

static void mainviewInd_build(uType* type)
{
    type->SetDependencies(
        ::g::albachain_bundle_typeof(),
        ::g::Fuse::Navigation::EdgeNavigation_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(mainviewInd, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, shadow_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, sidebarFade_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(mainviewInd, theEach_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(mainviewInd, temp_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(mainviewInd, sidebar), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(mainviewInd, shadow), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(mainviewInd, sidebarFade), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(mainviewInd, titleText), 0,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(mainviewInd, theEach), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(mainviewInd, gocontractbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(mainviewInd, temp_eb42), 0,
        ::g::Fuse::Controls::ScrollViewPager_typeof(), offsetof(mainviewInd, svp), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(mainviewInd, temp_eb43), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(mainviewInd, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&mainviewInd::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector10_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)mainviewInd__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* mainviewInd_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 153;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(mainviewInd);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("mainviewInd", options);
    type->fp_build_ = mainviewInd_build;
    type->fp_cctor_ = mainviewInd__cctor_4_fn;
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

// public mainviewInd(Fuse.Navigation.Router router) :218
void mainviewInd__ctor_8_fn(mainviewInd* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :224
void mainviewInd__InitializeUX_fn(mainviewInd* __this)
{
    __this->InitializeUX();
}

// public mainviewInd New(Fuse.Navigation.Router router) :218
void mainviewInd__New5_fn(::g::Fuse::Navigation::Router* router1, mainviewInd** __retval)
{
    *__retval = mainviewInd::New5(router1);
}

uSStrong<uArray*> mainviewInd::__g_static_nametable1_;
::g::Uno::UX::Selector mainviewInd::__selector0_;
::g::Uno::UX::Selector mainviewInd::__selector1_;
::g::Uno::UX::Selector mainviewInd::__selector2_;
::g::Uno::UX::Selector mainviewInd::__selector3_;
::g::Uno::UX::Selector mainviewInd::__selector4_;
::g::Uno::UX::Selector mainviewInd::__selector5_;
::g::Uno::UX::Selector mainviewInd::__selector6_;
::g::Uno::UX::Selector mainviewInd::__selector7_;
::g::Uno::UX::Selector mainviewInd::__selector8_;
::g::Uno::UX::Selector mainviewInd::__selector9_;
::g::Uno::UX::Selector mainviewInd::__selector10_;

// public mainviewInd(Fuse.Navigation.Router router) [instance] :218
void mainviewInd::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("mainviewInd", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :224
void mainviewInd::InitializeUX()
{
    uStackFrame __("mainviewInd", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, mainviewInd::__g_static_nametable1_);
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::albachain_FuseControlsShadow_Color_Property::New1(shadow, mainviewInd::__selector0_);
    sidebarFade = ::g::Fuse::Controls::Rectangle::New3();
    sidebarFade_Opacity_inst = ::g::albachain_FuseElementsElement_Opacity_Property::New1(sidebarFade, mainviewInd::__selector1_);
    theEach = ::g::Fuse::Reactive::Each::New4();
    theEach_Items_inst = ::g::albachain_FuseReactiveEach_Items_Property::New1(theEach, mainviewInd::__selector2_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(uString::Const("items"));
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::albachain_FuseTriggersWhileBool_Value_Property::New1(temp, mainviewInd::__selector3_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("isLoading"));
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("gocontract"));
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("loadMore"));
    ::g::Fuse::Reactive::JavaScript* temp5 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::iOS::StatusBarConfig* temp6 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Android::StatusBarConfig* temp7 = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Controls::ClientPanel* temp8 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::EdgeNavigator* temp9 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebar = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Navigation::ActivatingAnimation* temp10 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), shadow_Color_inst);
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), sidebarFade_Opacity_inst);
    ::g::profileInd* temp13 = ::g::profileInd::New5(router);
    ::g::Fuse::Drawing::StaticSolidColor* temp14 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Controls::Panel* temp15 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp17 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Grid* temp18 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Each* temp19 = ::g::Fuse::Reactive::Each::New4();
    mainviewInd__Template* temp20 = mainviewInd__Template::New2(this, this);
    ::g::Fuse::Gestures::Clicked* temp21 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp22 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp23 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    titleText = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Font* temp24 = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::RobotoBlacke33ab162()));
    ::g::Fuse::Controls::Image* temp25 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::ScrollView* temp26 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp27 = ::g::Fuse::Controls::StackPanel::New4();
    mainviewInd__Template1* temp28 = mainviewInd__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(theEach_Items_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Panel* temp30 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp31 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp32 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 3);
    gocontractbtn = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp33 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp35 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp36 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp37 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp38 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp39 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb42 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Controls::Shadow* temp40 = ::g::Fuse::Controls::Shadow::New2();
    svp = ::g::Fuse::Controls::ScrollViewPager::New2();
    temp_eb43 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp5->LineNumber(2);
    temp5->FileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp5->SourceLineNumber(2);
    temp5->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp5->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::mainviewInd5364505f()));
    temp6->Style(0);
    temp6->SourceLineNumber(3);
    temp6->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp7->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp7->SourceLineNumber(4);
    temp7->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp8->SourceLineNumber(7);
    temp8->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp9->Alignment(0);
    temp9->SourceLineNumber(9);
    temp9->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 80.0f, 0.0f));
    uPtr(sidebar)->Name(mainviewInd::__selector4_);
    uPtr(sidebar)->SourceLineNumber(11);
    uPtr(sidebar)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(mainviewInd::__selector5_);
    uPtr(shadow)->SourceLineNumber(13);
    uPtr(shadow)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp10->SourceLineNumber(14);
    temp10->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp12);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(1.0f));
    temp13->SourceLineNumber(18);
    temp13->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp15->SourceLineNumber(21);
    temp15->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp26);
    uPtr(sidebarFade)->Color(::g::Uno::Float4__New2(0.1176471f, 0.1137255f, 0.1176471f, 0.3058824f));
    uPtr(sidebarFade)->HitTestMode(0);
    uPtr(sidebarFade)->Opacity(0.0f);
    uPtr(sidebarFade)->Layer(3);
    uPtr(sidebarFade)->Name(mainviewInd::__selector6_);
    uPtr(sidebarFade)->SourceLineNumber(22);
    uPtr(sidebarFade)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp16->Color(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp16->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp16->Alignment(4);
    temp16->SourceLineNumber(24);
    temp16->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    temp17->Columns(uString::Const("auto,1*,auto"));
    temp17->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp17->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp17->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp17->SourceLineNumber(25);
    temp17->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp17, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), titleText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp25);
    temp18->RowCount(2);
    temp18->ColumnCount(2);
    temp18->Width(::g::Uno::UX::Size__New1(22.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 10.0f, 10.0f));
    temp18->SourceLineNumber(26);
    temp18->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp18->Background(temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp21);
    temp19->Count(4);
    temp19->SourceLineNumber(27);
    temp19->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp20);
    temp21->SourceLineNumber(30);
    temp21->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp22);
    temp22->SourceLineNumber(31);
    temp22->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp22->Target(sidebar);
    uPtr(titleText)->Value(uString::Const("albaChain"));
    uPtr(titleText)->FontSize(25.0f);
    uPtr(titleText)->Alignment(10);
    uPtr(titleText)->Name(mainviewInd::__selector7_);
    uPtr(titleText)->SourceLineNumber(34);
    uPtr(titleText)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(titleText)->Font(temp24);
    temp25->Color(::g::Uno::Float4__New2(0.5215687f, 0.5333334f, 0.5294118f, 1.0f));
    temp25->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp25->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp25->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 0.0f, 10.0f));
    temp25->SourceLineNumber(37);
    temp25->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp25->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::searchae1e1739()));
    temp26->LayoutMode(1);
    temp26->Alignment(0);
    temp26->Margin(::g::Uno::Float4__New2(0.0f, 100.0f, 0.0f, 0.0f));
    temp26->SourceLineNumber(43);
    temp26->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), svp);
    temp27->Orientation(1);
    temp27->ItemSpacing(10.0f);
    temp27->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp27->SourceLineNumber(44);
    temp27->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), theEach);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), gocontractbtn);
    uPtr(theEach)->Reuse(1);
    uPtr(theEach)->Name(mainviewInd::__selector8_);
    uPtr(theEach)->SourceLineNumber(45);
    uPtr(theEach)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(theEach)->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(theEach)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp29);
    temp1->SourceLineNumber(45);
    temp1->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp->SourceLineNumber(65);
    temp->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp32);
    temp30->Color(::g::Uno::Float4__New2(0.9647059f, 0.9843137f, 1.0f, 1.0f));
    temp30->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp30->LayoutRole(1);
    temp30->SourceLineNumber(66);
    temp30->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp31);
    temp31->Value(uString::Const("Loading..."));
    temp31->Alignment(10);
    temp31->SourceLineNumber(68);
    temp31->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp2->SourceLineNumber(65);
    temp2->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(gocontractbtn)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(gocontractbtn)->Color(::g::Uno::Float4__New2(0.9921569f, 1.0f, 0.9921569f, 1.0f));
    uPtr(gocontractbtn)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(gocontractbtn)->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    uPtr(gocontractbtn)->Name(mainviewInd::__selector9_);
    uPtr(gocontractbtn)->SourceLineNumber(71);
    uPtr(gocontractbtn)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp40);
    temp33->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp33->Width(::g::Uno::UX::Size__New1(2.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp33->Alignment(10);
    temp33->SourceLineNumber(72);
    temp33->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp34->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp34->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp34->Alignment(10);
    temp34->SourceLineNumber(73);
    temp34->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp35->Color(::g::Uno::Float4__New2(0.3215686f, 0.654902f, 0.7647059f, 1.0f));
    temp35->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp35->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp35->Alignment(10);
    temp35->SourceLineNumber(74);
    temp35->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp36->SourceLineNumber(75);
    temp36->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp37);
    temp37->Factor(0.9f);
    temp37->Duration(0.05);
    temp37->Target(gocontractbtn);
    temp38->SourceLineNumber(78);
    temp38->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb42);
    temp39->SourceLineNumber(79);
    temp39->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp39->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb42)));
    temp3->SourceLineNumber(79);
    temp3->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp40->Angle(107.0f);
    temp40->SourceLineNumber(81);
    temp40->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(svp)->Name(mainviewInd::__selector10_);
    uPtr(svp)->SourceLineNumber(85);
    uPtr(svp)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(svp)->add_ReachedEnd(uDelegate::New(::g::Fuse::Controls::ScrollViewPager__ScrollViewPagerHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb43)));
    uPtr(svp)->Each(theEach);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(svp)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb43);
    temp4->SourceLineNumber(85);
    temp4->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), titleText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), theEach);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), gocontractbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), svp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
}

// public mainviewInd New(Fuse.Navigation.Router router) [static] :218
mainviewInd* mainviewInd::New5(::g::Fuse::Navigation::Router* router1)
{
    mainviewInd* obj1 = (mainviewInd*)uNew(mainviewInd_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
