// This file was generated based on /Users/kbs/development/albachain-App/build/iOS/Preview/cache/ux15/mainviewInd.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseAnimationsAttractorfloat4_Value_Property.h>
#include <_root.albachain_FuseControlsImage_Color_Property.h>
#include <_root.albachain_FuseControlsNavigationControl_Active_Property.h>
#include <_root.albachain_FuseControlsShape_Color_Property.h>
#include <_root.albachain_FuseControlsTextControl_Color_Property.h>
#include <_root.albachain_FuseElementsElement_Opacity_Property.h>
#include <_root.albachain_FuseElementsElement_Width_Property.h>
#include <_root.albachain_FuseLayoutsColumn_Width_Property.h>
#include <_root.albachain_FuseTriggersWhileBool_Value_Property.h>
#include <_root.check.h>
#include <_root.contract.h>
#include <_root.home.h>
#include <_root.mainviewInd.h>
#include <_root.mainviewInd.Template.h>
#include <_root.profile.h>
#include <_root.TabHeader.h>
#include <_root.TabIcon.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Metric.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.NavigationAnimation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Translation.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
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
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>

namespace g{

// public partial sealed class mainviewInd :2
// {
// static mainviewInd() :105
static void mainviewInd__cctor_4_fn(uType* __type)
{
    mainviewInd::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 27, uString::Const("router"), uString::Const("titleText"), uString::Const("indicator"), uString::Const("p1"), uString::Const("p4"), uString::Const("col1"), uString::Const("col2"), uString::Const("col3"), uString::Const("col4"), uString::Const("c1"), uString::Const("h1"), uString::Const("c2"), uString::Const("h2"), uString::Const("c3"), uString::Const("h3"), uString::Const("c4"), uString::Const("h4"), uString::Const("nav"), uString::Const("indicatorColorAttractor"), uString::Const("bgColor"), uString::Const("bgColorAttractor"), uString::Const("titleTextAttractor"), uString::Const("shrinkIndicatorWidth"), uString::Const("page1"), uString::Const("page2"), uString::Const("page3"), uString::Const("page4"));
    mainviewInd::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Active"));
    mainviewInd::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Color"));
    mainviewInd::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Width"));
    mainviewInd::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Value"));
    mainviewInd::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Opacity"));
    mainviewInd::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("titleText"));
    mainviewInd::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("indicator"));
    mainviewInd::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("p1"));
    mainviewInd::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("p4"));
    mainviewInd::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("c1"));
    mainviewInd::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("h1"));
    mainviewInd::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("c2"));
    mainviewInd::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("h2"));
    mainviewInd::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("c3"));
    mainviewInd::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("h3"));
    mainviewInd::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("c4"));
    mainviewInd::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("h4"));
    mainviewInd::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("nav"));
    mainviewInd::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("indicatorColorAttractor"));
    mainviewInd::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("bgColor"));
    mainviewInd::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("bgColorAttractor"));
    mainviewInd::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("titleTextAttractor"));
    mainviewInd::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("shrinkIndicatorWidth"));
    mainviewInd::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page1"));
    mainviewInd::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page2"));
    mainviewInd::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page3"));
    mainviewInd::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("page4"));
}

static void mainviewInd_build(uType* type)
{
    type->SetDependencies(
        ::g::albachain_bundle_typeof(),
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Fuse::Elements::TranslationModes_typeof());
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(mainviewInd, nav_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, indicator_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, bgColor_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, titleText_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(mainviewInd, indicator_Width_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(mainviewInd, shrinkIndicatorWidth_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, indicatorColorAttractor_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, bgColorAttractor_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, titleTextAttractor_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, h1_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, col1_Width_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, c1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, h2_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, col2_Width_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, c2_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, h3_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, col3_Width_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, c3_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, h4_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(mainviewInd, col4_Width_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, c4_Color_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(mainviewInd, titleText), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(mainviewInd, indicator), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(mainviewInd, p1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(mainviewInd, p4), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(mainviewInd, col1), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(mainviewInd, col2), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(mainviewInd, col3), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(mainviewInd, col4), 0,
        ::g::TabIcon_typeof(), offsetof(mainviewInd, c1), 0,
        ::g::TabHeader_typeof(), offsetof(mainviewInd, h1), 0,
        ::g::TabIcon_typeof(), offsetof(mainviewInd, c2), 0,
        ::g::TabHeader_typeof(), offsetof(mainviewInd, h2), 0,
        ::g::TabIcon_typeof(), offsetof(mainviewInd, c3), 0,
        ::g::TabHeader_typeof(), offsetof(mainviewInd, h3), 0,
        ::g::TabIcon_typeof(), offsetof(mainviewInd, c4), 0,
        ::g::TabHeader_typeof(), offsetof(mainviewInd, h4), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(mainviewInd, nav), 0,
        ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, indicatorColorAttractor), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(mainviewInd, bgColor), 0,
        ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, bgColorAttractor), 0,
        ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(mainviewInd, titleTextAttractor), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(mainviewInd, shrinkIndicatorWidth), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(mainviewInd, page1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(mainviewInd, page2), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(mainviewInd, page3), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(mainviewInd, page4), 0,
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
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector26_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)mainviewInd__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* mainviewInd_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 203;
    options.InterfaceCount = 19;
    options.DependencyCount = 4;
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

// public mainviewInd(Fuse.Navigation.Router router) :109
void mainviewInd__ctor_8_fn(mainviewInd* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :115
void mainviewInd__InitializeUX_fn(mainviewInd* __this)
{
    __this->InitializeUX();
}

// public mainviewInd New(Fuse.Navigation.Router router) :109
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
::g::Uno::UX::Selector mainviewInd::__selector11_;
::g::Uno::UX::Selector mainviewInd::__selector12_;
::g::Uno::UX::Selector mainviewInd::__selector13_;
::g::Uno::UX::Selector mainviewInd::__selector14_;
::g::Uno::UX::Selector mainviewInd::__selector15_;
::g::Uno::UX::Selector mainviewInd::__selector16_;
::g::Uno::UX::Selector mainviewInd::__selector17_;
::g::Uno::UX::Selector mainviewInd::__selector18_;
::g::Uno::UX::Selector mainviewInd::__selector19_;
::g::Uno::UX::Selector mainviewInd::__selector20_;
::g::Uno::UX::Selector mainviewInd::__selector21_;
::g::Uno::UX::Selector mainviewInd::__selector22_;
::g::Uno::UX::Selector mainviewInd::__selector23_;
::g::Uno::UX::Selector mainviewInd::__selector24_;
::g::Uno::UX::Selector mainviewInd::__selector25_;
::g::Uno::UX::Selector mainviewInd::__selector26_;

// public mainviewInd(Fuse.Navigation.Router router) [instance] :109
void mainviewInd::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("mainviewInd", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :115
void mainviewInd::InitializeUX()
{
    uStackFrame __("mainviewInd", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, mainviewInd::__g_static_nametable1_);
    nav = ::g::Fuse::Controls::PageControl::New4();
    nav_Active_inst = ::g::albachain_FuseControlsNavigationControl_Active_Property::New1(nav, mainviewInd::__selector0_);
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Color_inst = ::g::albachain_FuseControlsShape_Color_Property::New1(indicator, mainviewInd::__selector1_);
    bgColor = ::g::Fuse::Controls::Rectangle::New3();
    bgColor_Color_inst = ::g::albachain_FuseControlsShape_Color_Property::New1(bgColor, mainviewInd::__selector1_);
    titleText = ::g::Fuse::Controls::Text::New3();
    titleText_Color_inst = ::g::albachain_FuseControlsTextControl_Color_Property::New1(titleText, mainviewInd::__selector1_);
    indicator_Width_inst = ::g::albachain_FuseElementsElement_Width_Property::New1(indicator, mainviewInd::__selector2_);
    shrinkIndicatorWidth = ::g::Fuse::Triggers::WhileTrue::New2();
    shrinkIndicatorWidth_Value_inst = ::g::albachain_FuseTriggersWhileBool_Value_Property::New1(shrinkIndicatorWidth, mainviewInd::__selector3_);
    indicatorColorAttractor = ((::g::Fuse::Animations::Attractor*)::g::Fuse::Animations::Attractor::New3(::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), indicator_Color_inst));
    indicatorColorAttractor_Value_inst = ::g::albachain_FuseAnimationsAttractorfloat4_Value_Property::New1(indicatorColorAttractor, mainviewInd::__selector3_);
    bgColorAttractor = ((::g::Fuse::Animations::Attractor*)::g::Fuse::Animations::Attractor::New3(::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), bgColor_Color_inst));
    bgColorAttractor_Value_inst = ::g::albachain_FuseAnimationsAttractorfloat4_Value_Property::New1(bgColorAttractor, mainviewInd::__selector3_);
    titleTextAttractor = ((::g::Fuse::Animations::Attractor*)::g::Fuse::Animations::Attractor::New3(::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), titleText_Color_inst));
    titleTextAttractor_Value_inst = ::g::albachain_FuseAnimationsAttractorfloat4_Value_Property::New1(titleTextAttractor, mainviewInd::__selector3_);
    h1 = ::g::TabHeader::New4();
    h1_Opacity_inst = ::g::albachain_FuseElementsElement_Opacity_Property::New1(h1, mainviewInd::__selector4_);
    col1 = ::g::Fuse::Layouts::Column::New2();
    col1_Width_inst = ::g::albachain_FuseLayoutsColumn_Width_Property::New1(col1, mainviewInd::__selector2_);
    c1 = ::g::TabIcon::New4();
    c1_Color_inst = ::g::albachain_FuseControlsImage_Color_Property::New1(c1, mainviewInd::__selector1_);
    h2 = ::g::TabHeader::New4();
    h2_Opacity_inst = ::g::albachain_FuseElementsElement_Opacity_Property::New1(h2, mainviewInd::__selector4_);
    col2 = ::g::Fuse::Layouts::Column::New2();
    col2_Width_inst = ::g::albachain_FuseLayoutsColumn_Width_Property::New1(col2, mainviewInd::__selector2_);
    c2 = ::g::TabIcon::New4();
    c2_Color_inst = ::g::albachain_FuseControlsImage_Color_Property::New1(c2, mainviewInd::__selector1_);
    h3 = ::g::TabHeader::New4();
    h3_Opacity_inst = ::g::albachain_FuseElementsElement_Opacity_Property::New1(h3, mainviewInd::__selector4_);
    col3 = ::g::Fuse::Layouts::Column::New2();
    col3_Width_inst = ::g::albachain_FuseLayoutsColumn_Width_Property::New1(col3, mainviewInd::__selector2_);
    c3 = ::g::TabIcon::New4();
    c3_Color_inst = ::g::albachain_FuseControlsImage_Color_Property::New1(c3, mainviewInd::__selector1_);
    h4 = ::g::TabHeader::New4();
    h4_Opacity_inst = ::g::albachain_FuseElementsElement_Opacity_Property::New1(h4, mainviewInd::__selector4_);
    col4 = ::g::Fuse::Layouts::Column::New2();
    col4_Width_inst = ::g::albachain_FuseLayoutsColumn_Width_Property::New1(col4, mainviewInd::__selector2_);
    c4 = ::g::TabIcon::New4();
    c4_Color_inst = ::g::albachain_FuseControlsImage_Color_Property::New1(c4, mainviewInd::__selector1_);
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::iOS::StatusBarConfig* temp1 = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Android::StatusBarConfig* temp2 = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Controls::ClientPanel* temp3 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Grid* temp4 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Grid* temp5 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Each* temp6 = ::g::Fuse::Reactive::Each::New4();
    mainviewInd__Template* temp7 = mainviewInd__Template::New2(this, this);
    ::g::Fuse::Font* temp8 = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::RobotoBlack57c73d95()));
    ::g::Fuse::Controls::Image* temp9 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp10 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp11 = ::g::Fuse::Controls::Grid::New4();
    p1 = ::g::Fuse::Controls::Panel::New3();
    p4 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp12 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp13 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp14 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp15 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp16 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), nav_Active_inst);
    ::g::Fuse::Controls::Panel* temp17 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp18 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp19 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp20 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), nav_Active_inst);
    ::g::Fuse::Controls::Panel* temp21 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp22 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp23 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp24 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), nav_Active_inst);
    ::g::Fuse::Controls::Panel* temp25 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp26 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp27 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp28 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), nav_Active_inst);
    ::g::Fuse::Motion::NavigationMotion* temp29 = ::g::Fuse::Motion::NavigationMotion::New2();
    ::g::Fuse::Animations::Change* temp30 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), indicator_Width_inst);
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::home* temp31 = ::g::home::New5();
    ::g::Fuse::Navigation::WhileActive* temp32 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp33 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp34 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp35 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), bgColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp36 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), titleTextAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp37 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp38 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp39 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), col1_Width_inst);
    ::g::Fuse::Animations::Change* temp40 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), c1_Color_inst);
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::contract* temp41 = ::g::contract::New5();
    ::g::Fuse::Navigation::WhileActive* temp42 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp43 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp44 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp45 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), bgColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp46 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), titleTextAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp47 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp48 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), h2_Opacity_inst);
    ::g::Fuse::Animations::Change* temp49 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), col2_Width_inst);
    ::g::Fuse::Animations::Change* temp50 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), c2_Color_inst);
    page3 = ::g::Fuse::Controls::Page::New4();
    ::g::check* temp51 = ::g::check::New5();
    ::g::Fuse::Navigation::WhileActive* temp52 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp53 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp54 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp55 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), bgColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp56 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), titleTextAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp57 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp58 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), h3_Opacity_inst);
    ::g::Fuse::Animations::Change* temp59 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), col3_Width_inst);
    ::g::Fuse::Animations::Change* temp60 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), c3_Color_inst);
    page4 = ::g::Fuse::Controls::Page::New4();
    ::g::profile* temp61 = ::g::profile::New5();
    ::g::Fuse::Navigation::WhileActive* temp62 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp63 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp64 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp65 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), bgColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp66 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), titleTextAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp67 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp68 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp69 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp70 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), h4_Opacity_inst);
    ::g::Fuse::Animations::Change* temp71 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), col4_Width_inst);
    ::g::Fuse::Animations::Change* temp72 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), c4_Color_inst);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp->LineNumber(2);
    temp->FileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp->SourceLineNumber(2);
    temp->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::mainviewIndb81e9f0c()));
    temp1->Style(0);
    temp1->SourceLineNumber(3);
    temp1->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp2->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->SourceLineNumber(4);
    temp2->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp3->SourceLineNumber(7);
    temp3->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), nav);
    temp4->Columns(uString::Const("auto,1*,auto"));
    temp4->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp4->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp4->SourceLineNumber(8);
    temp4->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), titleText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp5->RowCount(2);
    temp5->ColumnCount(2);
    temp5->Width(::g::Uno::UX::Size__New1(22.0f, 1));
    temp5->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp5->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp5->SourceLineNumber(9);
    temp5->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    temp6->Count(4);
    temp6->SourceLineNumber(10);
    temp6->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp7);
    uPtr(titleText)->Value(uString::Const("albaChain"));
    uPtr(titleText)->FontSize(25.0f);
    uPtr(titleText)->Color(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    uPtr(titleText)->Alignment(10);
    uPtr(titleText)->Name(mainviewInd::__selector5_);
    uPtr(titleText)->SourceLineNumber(14);
    uPtr(titleText)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(titleText)->Font(temp8);
    temp9->Color(::g::Uno::Float4__New2(0.5215687f, 0.5333334f, 0.5294118f, 1.0f));
    temp9->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp9->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp9->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp9->SourceLineNumber(17);
    temp9->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp9->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::search5c9145e2()));
    temp10->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp10->SourceLineNumber(22);
    temp10->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp10, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    uPtr(indicator)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    uPtr(indicator)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(indicator)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    uPtr(indicator)->ZOffset(0.1f);
    uPtr(indicator)->Name(mainviewInd::__selector6_);
    uPtr(indicator)->SourceLineNumber(23);
    uPtr(indicator)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, p1);
    temp11->ColumnCount(5);
    temp11->Margin(::g::Uno::Float4__New2(-30.0f, 0.0f, -30.0f, 0.0f));
    temp11->SourceLineNumber(24);
    temp11->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), p1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), p4);
    uPtr(p1)->Name(mainviewInd::__selector7_);
    uPtr(p1)->SourceLineNumber(25);
    uPtr(p1)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Controls::Grid::SetColumn(p1, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(p1, 2);
    uPtr(p4)->Name(mainviewInd::__selector8_);
    uPtr(p4)->SourceLineNumber(26);
    uPtr(p4)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Controls::Grid::SetColumn(p4, 3);
    ::g::Fuse::Controls::Grid::SetColumnSpan(p4, 2);
    temp12->Margin(::g::Uno::Float4__New2(-20.0f, 0.0f, -20.0f, 0.0f));
    temp12->ZOffset(1.0f);
    temp12->SourceLineNumber(29);
    temp12->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->ColumnList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL)), col1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->ColumnList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL)), col2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->ColumnList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL)), col3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->ColumnList()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL)), col4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp25);
    uPtr(col1)->WidthMetric(1);
    uPtr(col1)->Width(1.0f);
    uPtr(col2)->WidthMetric(1);
    uPtr(col2)->Width(1.0f);
    uPtr(col3)->WidthMetric(1);
    uPtr(col3)->Width(1.0f);
    uPtr(col4)->WidthMetric(1);
    uPtr(col4)->Width(1.0f);
    temp13->HitTestMode(2);
    temp13->SourceLineNumber(38);
    temp13->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    temp14->Columns(uString::Const("auto,1*"));
    temp14->Alignment(1);
    temp14->Margin(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    temp14->SourceLineNumber(39);
    temp14->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), c1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), h1);
    uPtr(c1)->Color(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    uPtr(c1)->Name(mainviewInd::__selector9_);
    uPtr(c1)->SourceLineNumber(40);
    uPtr(c1)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(c1)->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::home2x2b9f634d()));
    uPtr(h1)->Value(uString::Const("Home"));
    uPtr(h1)->Name(mainviewInd::__selector10_);
    uPtr(h1)->SourceLineNumber(41);
    uPtr(h1)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp15->SourceLineNumber(43);
    temp15->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp16);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp16, page1);
    temp16->SourceLineNumber(44);
    temp16->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp17->HitTestMode(2);
    temp17->SourceLineNumber(47);
    temp17->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    temp18->Columns(uString::Const("auto,1*"));
    temp18->Alignment(1);
    temp18->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    temp18->SourceLineNumber(48);
    temp18->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), c2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), h2);
    uPtr(c2)->Color(::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f));
    uPtr(c2)->Name(mainviewInd::__selector11_);
    uPtr(c2)->SourceLineNumber(49);
    uPtr(c2)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(c2)->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::accountbalance4c2913fb()));
    uPtr(h2)->Value(uString::Const("Contract"));
    uPtr(h2)->Name(mainviewInd::__selector12_);
    uPtr(h2)->SourceLineNumber(50);
    uPtr(h2)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp19->SourceLineNumber(52);
    temp19->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp20);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp20, page2);
    temp20->SourceLineNumber(53);
    temp20->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp21->HitTestMode(2);
    temp21->SourceLineNumber(56);
    temp21->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp23);
    temp22->Columns(uString::Const("auto,1*"));
    temp22->Alignment(1);
    temp22->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    temp22->SourceLineNumber(57);
    temp22->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), c3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), h3);
    uPtr(c3)->Color(::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f));
    uPtr(c3)->Name(mainviewInd::__selector13_);
    uPtr(c3)->SourceLineNumber(58);
    uPtr(c3)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(c3)->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::playe24bb230()));
    uPtr(h3)->Value(uString::Const("Check"));
    uPtr(h3)->Name(mainviewInd::__selector14_);
    uPtr(h3)->SourceLineNumber(59);
    uPtr(h3)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp23->SourceLineNumber(62);
    temp23->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp24);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp24, page3);
    temp24->SourceLineNumber(63);
    temp24->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp25->HitTestMode(2);
    temp25->SourceLineNumber(66);
    temp25->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp27);
    temp26->Columns(uString::Const("auto,1*"));
    temp26->Alignment(1);
    temp26->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    temp26->SourceLineNumber(67);
    temp26->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), c4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), h4);
    uPtr(c4)->Color(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f));
    uPtr(c4)->Name(mainviewInd::__selector15_);
    uPtr(c4)->SourceLineNumber(68);
    uPtr(c4)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(c4)->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::person6333b885()));
    uPtr(h4)->Value(uString::Const("Profile"));
    uPtr(h4)->Name(mainviewInd::__selector16_);
    uPtr(h4)->SourceLineNumber(69);
    uPtr(h4)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp27->SourceLineNumber(71);
    temp27->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp28);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp28, page4);
    temp28->SourceLineNumber(72);
    temp28->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(nav)->Name(mainviewInd::__selector17_);
    uPtr(nav)->SourceLineNumber(77);
    uPtr(nav)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(nav)->Motion(temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), indicatorColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), bgColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), bgColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), titleTextAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), shrinkIndicatorWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), page4);
    temp29->GotoEasing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(indicatorColorAttractor), uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    uPtr(indicatorColorAttractor)->Name(mainviewInd::__selector18_);
    uPtr(indicatorColorAttractor)->SourceLineNumber(79);
    uPtr(indicatorColorAttractor)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(bgColor)->Color(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    uPtr(bgColor)->Opacity(0.12f);
    uPtr(bgColor)->Layer(1);
    uPtr(bgColor)->Name(mainviewInd::__selector19_);
    uPtr(bgColor)->SourceLineNumber(80);
    uPtr(bgColor)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(bgColorAttractor), uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    uPtr(bgColorAttractor)->Name(mainviewInd::__selector20_);
    uPtr(bgColorAttractor)->SourceLineNumber(81);
    uPtr(bgColorAttractor)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(titleTextAttractor), uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    uPtr(titleTextAttractor)->Name(mainviewInd::__selector21_);
    uPtr(titleTextAttractor)->SourceLineNumber(82);
    uPtr(titleTextAttractor)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    uPtr(shrinkIndicatorWidth)->Name(mainviewInd::__selector22_);
    uPtr(shrinkIndicatorWidth)->SourceLineNumber(84);
    uPtr(shrinkIndicatorWidth)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(shrinkIndicatorWidth)->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp30);
    ::g::Fuse::Animations::Change__set_Value_fn(temp30, uCRef(::g::Uno::UX::Size__New1(90.0f, 1)));
    temp30->Duration(0.25);
    uPtr(page1)->Name(mainviewInd::__selector23_);
    uPtr(page1)->SourceLineNumber(90);
    uPtr(page1)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp37);
    temp31->SourceLineNumber(92);
    temp31->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp32->Threshold(0.5f);
    temp32->SourceLineNumber(93);
    temp32->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp36);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp33, uCRef(false));
    temp33->SourceLineNumber(94);
    temp33->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp34, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp34->SourceLineNumber(95);
    temp34->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp35, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp35->SourceLineNumber(96);
    temp35->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp36, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp36->SourceLineNumber(97);
    temp36->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp37->SourceLineNumber(99);
    temp37->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp40);
    ::g::Fuse::Animations::Change__set_Value_fn(temp38, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp39, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp40, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(page2)->Name(mainviewInd::__selector24_);
    uPtr(page2)->SourceLineNumber(105);
    uPtr(page2)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp47);
    temp41->SourceLineNumber(107);
    temp41->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp42->Threshold(0.5f);
    temp42->SourceLineNumber(108);
    temp42->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp42->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp46);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp43, uCRef(true));
    temp43->SourceLineNumber(109);
    temp43->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp44, uCRef(::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f)));
    temp44->SourceLineNumber(110);
    temp44->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp45, uCRef(::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f)));
    temp45->SourceLineNumber(111);
    temp45->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp46, uCRef(::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f)));
    temp46->SourceLineNumber(112);
    temp46->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp47->SourceLineNumber(114);
    temp47->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp50);
    ::g::Fuse::Animations::Change__set_Value_fn(temp48, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp49, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp50, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(page3)->Name(mainviewInd::__selector25_);
    uPtr(page3)->SourceLineNumber(120);
    uPtr(page3)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp57);
    temp51->SourceLineNumber(122);
    temp51->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp52->Threshold(0.5f);
    temp52->SourceLineNumber(123);
    temp52->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp52->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp56);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp53, uCRef(true));
    temp53->SourceLineNumber(124);
    temp53->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp54, uCRef(::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f)));
    temp54->SourceLineNumber(125);
    temp54->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp55, uCRef(::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f)));
    temp55->SourceLineNumber(126);
    temp55->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp56, uCRef(::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f)));
    temp56->SourceLineNumber(127);
    temp56->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp57->SourceLineNumber(129);
    temp57->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp58);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp60);
    ::g::Fuse::Animations::Change__set_Value_fn(temp58, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp59, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp60, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(page4)->Name(mainviewInd::__selector26_);
    uPtr(page4)->SourceLineNumber(135);
    uPtr(page4)->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp69);
    temp61->SourceLineNumber(137);
    temp61->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp62->Threshold(0.5f);
    temp62->SourceLineNumber(138);
    temp62->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp65);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp62->Actions()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL)), temp66);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp63, uCRef(false));
    temp63->SourceLineNumber(139);
    temp63->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp64, uCRef(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f)));
    temp64->SourceLineNumber(140);
    temp64->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp65, uCRef(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f)));
    temp65->SourceLineNumber(141);
    temp65->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp66, uCRef(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f)));
    temp66->SourceLineNumber(142);
    temp66->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    temp67->Scale(0.333f);
    temp67->SourceLineNumber(144);
    temp67->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp68);
    temp68->X(1.0f);
    temp68->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp68->RelativeNode(p4);
    temp68->Target(indicator);
    temp69->SourceLineNumber(147);
    temp69->SourceFileName(uString::Const("Pages/individual/mainviewInd.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp69->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp72);
    ::g::Fuse::Animations::Change__set_Value_fn(temp70, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp71, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp72, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), titleText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), p1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), p4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), col1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), col2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), col3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), col4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), c1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), h1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), c2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), h2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), c3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), h3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), c4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), h4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), nav);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), indicatorColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), bgColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), bgColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), titleTextAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), shrinkIndicatorWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), page4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
}

// public mainviewInd New(Fuse.Navigation.Router router) [static] :109
mainviewInd* mainviewInd::New5(::g::Fuse::Navigation::Router* router1)
{
    mainviewInd* obj1 = (mainviewInd*)uNew(mainviewInd_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
