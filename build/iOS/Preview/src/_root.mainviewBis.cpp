// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/mainviewBis.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseControlsShadow_Color_Property.h>
#include <_root.albachain_FuseElementsElement_Opacity_Property.h>
#include <_root.albachain_FuseReactiveEach_Items_Property.h>
#include <_root.albachain_FuseTriggersWhileBool_Value_Property.h>
#include <_root.maintopbar.h>
#include <_root.mainviewBis.h>
#include <_root.mainviewBis.Template.h>
#include <_root.mainviewBis.Template1.h>
#include <_root.profile.h>
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

// public partial sealed class mainviewBis :2
// {
// static mainviewBis() :181
static void mainviewBis__cctor_4_fn(uType* __type)
{
    mainviewBis::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 10, uString::Const("router"), uString::Const("sidebar"), uString::Const("shadow"), uString::Const("sidebarFade"), uString::Const("titleText"), uString::Const("theEach"), uString::Const("gocontractbtn"), uString::Const("temp_eb21"), uString::Const("svp"), uString::Const("temp_eb22"));
    mainviewBis::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    mainviewBis::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Opacity"));
    mainviewBis::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    mainviewBis::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Value"));
    mainviewBis::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sidebar"));
    mainviewBis::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("shadow"));
    mainviewBis::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sidebarFade"));
    mainviewBis::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("titleText"));
    mainviewBis::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("theEach"));
    mainviewBis::__selector9_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("gocontractbtn"));
    mainviewBis::__selector10_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("svp"));
}

static void mainviewBis_build(uType* type)
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(mainviewBis, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewBis, shadow_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewBis, sidebarFade_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(mainviewBis, theEach_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(mainviewBis, temp_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(mainviewBis, sidebar), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(mainviewBis, shadow), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(mainviewBis, sidebarFade), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(mainviewBis, titleText), 0,
        ::g::Fuse::Reactive::Each_typeof(), offsetof(mainviewBis, theEach), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(mainviewBis, gocontractbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(mainviewBis, temp_eb21), 0,
        ::g::Fuse::Controls::ScrollViewPager_typeof(), offsetof(mainviewBis, svp), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(mainviewBis, temp_eb22), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(mainviewBis, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&mainviewBis::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector9_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewBis::__selector10_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)mainviewBis__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* mainviewBis_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 153;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(mainviewBis);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("mainviewBis", options);
    type->fp_build_ = mainviewBis_build;
    type->fp_cctor_ = mainviewBis__cctor_4_fn;
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

// public mainviewBis(Fuse.Navigation.Router router) :185
void mainviewBis__ctor_8_fn(mainviewBis* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :191
void mainviewBis__InitializeUX_fn(mainviewBis* __this)
{
    __this->InitializeUX();
}

// public mainviewBis New(Fuse.Navigation.Router router) :185
void mainviewBis__New5_fn(::g::Fuse::Navigation::Router* router1, mainviewBis** __retval)
{
    *__retval = mainviewBis::New5(router1);
}

uSStrong<uArray*> mainviewBis::__g_static_nametable1_;
::g::Uno::UX::Selector mainviewBis::__selector0_;
::g::Uno::UX::Selector mainviewBis::__selector1_;
::g::Uno::UX::Selector mainviewBis::__selector2_;
::g::Uno::UX::Selector mainviewBis::__selector3_;
::g::Uno::UX::Selector mainviewBis::__selector4_;
::g::Uno::UX::Selector mainviewBis::__selector5_;
::g::Uno::UX::Selector mainviewBis::__selector6_;
::g::Uno::UX::Selector mainviewBis::__selector7_;
::g::Uno::UX::Selector mainviewBis::__selector8_;
::g::Uno::UX::Selector mainviewBis::__selector9_;
::g::Uno::UX::Selector mainviewBis::__selector10_;

// public mainviewBis(Fuse.Navigation.Router router) [instance] :185
void mainviewBis::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("mainviewBis", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :191
void mainviewBis::InitializeUX()
{
    uStackFrame __("mainviewBis", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, mainviewBis::__g_static_nametable1_);
    shadow = ::g::Fuse::Controls::Shadow::New2();
    shadow_Color_inst = ::g::albachain_FuseControlsShadow_Color_Property::New1(shadow, mainviewBis::__selector0_);
    sidebarFade = ::g::Fuse::Controls::Rectangle::New3();
    sidebarFade_Opacity_inst = ::g::albachain_FuseElementsElement_Opacity_Property::New1(sidebarFade, mainviewBis::__selector1_);
    theEach = ::g::Fuse::Reactive::Each::New4();
    theEach_Items_inst = ::g::albachain_FuseReactiveEach_Items_Property::New1(theEach, mainviewBis::__selector2_);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(uString::Const("items"));
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::albachain_FuseTriggersWhileBool_Value_Property::New1(temp, mainviewBis::__selector3_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("isLoading"));
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("gocontract"));
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("loadMore"));
    ::g::Fuse::Reactive::JavaScript* temp5 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ClientPanel* temp6 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::EdgeNavigator* temp7 = ::g::Fuse::Controls::EdgeNavigator::New4();
    sidebar = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Navigation::ActivatingAnimation* temp8 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), shadow_Color_inst);
    ::g::Fuse::Animations::Change* temp10 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), sidebarFade_Opacity_inst);
    ::g::profile* temp11 = ::g::profile::New5(router);
    ::g::Fuse::Drawing::StaticSolidColor* temp12 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    ::g::Fuse::Controls::Panel* temp13 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp14 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp15 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Grid* temp16 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Each* temp17 = ::g::Fuse::Reactive::Each::New4();
    mainviewBis__Template* temp18 = mainviewBis__Template::New2(this, this);
    ::g::Fuse::Gestures::Clicked* temp19 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateToggle* temp20 = ::g::Fuse::Navigation::NavigateToggle::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp21 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    titleText = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Font* temp22 = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::RobotoBlacke33ab162()));
    ::g::Fuse::Controls::Image* temp23 = ::g::Fuse::Controls::Image::New3();
    ::g::maintopbar* temp24 = ::g::maintopbar::New5();
    ::g::Fuse::Controls::ScrollView* temp25 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp26 = ::g::Fuse::Controls::StackPanel::New4();
    mainviewBis__Template1* temp27 = mainviewBis__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(theEach_Items_inst, (uObject*)temp1, 3);
    ::g::Fuse::Controls::Panel* temp29 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp30 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 3);
    gocontractbtn = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp32 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp33 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp34 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp35 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp36 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp37 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp38 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb21 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Controls::Shadow* temp39 = ::g::Fuse::Controls::Shadow::New2();
    svp = ::g::Fuse::Controls::ScrollViewPager::New2();
    temp_eb22 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp5->LineNumber(3);
    temp5->FileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp5->SourceLineNumber(3);
    temp5->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp5->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::mainviewBis6a04abf7()));
    temp6->SourceLineNumber(5);
    temp6->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    temp7->Alignment(0);
    temp7->SourceLineNumber(6);
    temp7->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    uPtr(sidebar)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(sidebar)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 80.0f, 0.0f));
    uPtr(sidebar)->Name(mainviewBis::__selector4_);
    uPtr(sidebar)->SourceLineNumber(8);
    uPtr(sidebar)->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Fuse::Navigation::EdgeNavigation::SetEdge(sidebar, 0);
    uPtr(sidebar)->Background(temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sidebar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    uPtr(shadow)->Angle(180.0f);
    uPtr(shadow)->Distance(8.0f);
    uPtr(shadow)->Size(16.0f);
    uPtr(shadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(shadow)->Name(mainviewBis::__selector5_);
    uPtr(shadow)->SourceLineNumber(10);
    uPtr(shadow)->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp8->SourceLineNumber(11);
    temp8->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp10);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.2666667f)));
    ::g::Fuse::Animations::Change__set_Value_fn(temp10, uCRef(1.0f));
    temp11->SourceLineNumber(15);
    temp11->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp13->Color(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp13->SourceLineNumber(18);
    temp13->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp25);
    uPtr(sidebarFade)->Color(::g::Uno::Float4__New2(0.1176471f, 0.1137255f, 0.1176471f, 0.3058824f));
    uPtr(sidebarFade)->HitTestMode(0);
    uPtr(sidebarFade)->Opacity(0.0f);
    uPtr(sidebarFade)->Layer(3);
    uPtr(sidebarFade)->Name(mainviewBis::__selector6_);
    uPtr(sidebarFade)->SourceLineNumber(21);
    uPtr(sidebarFade)->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp14->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp14->Alignment(4);
    temp14->SourceLineNumber(22);
    temp14->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    temp15->Columns(uString::Const("auto,1*,auto"));
    temp15->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp15->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp15->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp15->SourceLineNumber(23);
    temp15->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp15, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), titleText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp23);
    temp16->RowCount(2);
    temp16->ColumnCount(2);
    temp16->Width(::g::Uno::UX::Size__New1(22.0f, 1));
    temp16->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp16->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 10.0f, 10.0f));
    temp16->SourceLineNumber(24);
    temp16->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp16->Background(temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    temp17->Count(4);
    temp17->SourceLineNumber(25);
    temp17->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp18);
    temp19->SourceLineNumber(28);
    temp19->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp20);
    temp20->SourceLineNumber(29);
    temp20->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp20->Target(sidebar);
    uPtr(titleText)->Value(uString::Const("albaChain"));
    uPtr(titleText)->FontSize(25.0f);
    uPtr(titleText)->Alignment(10);
    uPtr(titleText)->Name(mainviewBis::__selector7_);
    uPtr(titleText)->SourceLineNumber(32);
    uPtr(titleText)->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    uPtr(titleText)->Font(temp22);
    temp23->Color(::g::Uno::Float4__New2(0.5215687f, 0.5333334f, 0.5294118f, 1.0f));
    temp23->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp23->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp23->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 0.0f, 10.0f));
    temp23->SourceLineNumber(35);
    temp23->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp23->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::searchae1e1739()));
    temp24->SourceLineNumber(38);
    temp24->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp25->LayoutMode(1);
    temp25->Alignment(0);
    temp25->Margin(::g::Uno::Float4__New2(0.0f, 100.0f, 0.0f, 0.0f));
    temp25->SourceLineNumber(41);
    temp25->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), svp);
    temp26->Orientation(1);
    temp26->ItemSpacing(10.0f);
    temp26->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp26->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp26->SourceLineNumber(42);
    temp26->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), theEach);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), gocontractbtn);
    uPtr(theEach)->Reuse(1);
    uPtr(theEach)->Name(mainviewBis::__selector8_);
    uPtr(theEach)->SourceLineNumber(43);
    uPtr(theEach)->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(theEach)->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(theEach)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp28);
    temp1->SourceLineNumber(43);
    temp1->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp->SourceLineNumber(61);
    temp->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Nodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp31);
    temp29->Color(::g::Uno::Float4__New2(0.9647059f, 0.9843137f, 1.0f, 1.0f));
    temp29->Height(::g::Uno::UX::Size__New1(100.0f, 1));
    temp29->LayoutRole(1);
    temp29->SourceLineNumber(62);
    temp29->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp30);
    temp30->Value(uString::Const("Loading..."));
    temp30->Alignment(10);
    temp30->SourceLineNumber(63);
    temp30->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp2->SourceLineNumber(61);
    temp2->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    uPtr(gocontractbtn)->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    uPtr(gocontractbtn)->Color(::g::Uno::Float4__New2(0.9921569f, 1.0f, 0.9921569f, 1.0f));
    uPtr(gocontractbtn)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(gocontractbtn)->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    uPtr(gocontractbtn)->Name(mainviewBis::__selector9_);
    uPtr(gocontractbtn)->SourceLineNumber(66);
    uPtr(gocontractbtn)->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(gocontractbtn)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp39);
    temp32->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp32->Width(::g::Uno::UX::Size__New1(2.0f, 1));
    temp32->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp32->Alignment(10);
    temp32->SourceLineNumber(67);
    temp32->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp33->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp33->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp33->Alignment(10);
    temp33->SourceLineNumber(68);
    temp33->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp34->Color(::g::Uno::Float4__New2(0.3215686f, 0.654902f, 0.7647059f, 1.0f));
    temp34->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp34->Alignment(10);
    temp34->SourceLineNumber(69);
    temp34->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp35->SourceLineNumber(70);
    temp35->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp36);
    temp36->Factor(0.9f);
    temp36->Duration(0.05);
    temp36->Target(gocontractbtn);
    temp37->SourceLineNumber(73);
    temp37->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb21);
    temp38->SourceLineNumber(74);
    temp38->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp38->add_Handler(uDelegate::New(::g::Fuse::VisualEventHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb21)));
    temp3->SourceLineNumber(74);
    temp3->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    temp39->Angle(107.0f);
    temp39->SourceLineNumber(76);
    temp39->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    uPtr(svp)->Name(mainviewBis::__selector10_);
    uPtr(svp)->SourceLineNumber(81);
    uPtr(svp)->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    uPtr(svp)->add_ReachedEnd(uDelegate::New(::g::Fuse::Controls::ScrollViewPager__ScrollViewPagerHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb22)));
    uPtr(svp)->Each(theEach);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(svp)->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb22);
    temp4->SourceLineNumber(81);
    temp4->SourceFileName(uString::Const("Pages/business/mainviewBis.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sidebar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), shadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sidebarFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), titleText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), theEach);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), gocontractbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), svp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
}

// public mainviewBis New(Fuse.Navigation.Router router) [static] :185
mainviewBis* mainviewBis::New5(::g::Fuse::Navigation::Router* router1)
{
    mainviewBis* obj1 = (mainviewBis*)uNew(mainviewBis_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
