// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/contract.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseControlsTextInputControl_Value_Property.h>
#include <_root.contract.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
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
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
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
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[32];
static uType* TYPES[8];

namespace g{

// public partial sealed class contract :2
// {
// static contract() :25
static void contract__cctor_4_fn(uType* __type)
{
    contract::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb32"*/], ::STRINGS[2/*"titleText"*/], ::STRINGS[3/*"time"*/], ::STRINGS[4/*"submitbtn"*/], ::STRINGS[5/*"temp_eb33"*/]);
    contract::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"Value"*/]);
    contract::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"titleText"*/]);
    contract::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"time"*/]);
    contract::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"submitbtn"*/]);
}

static void contract_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb32");
    ::STRINGS[2] = uString::Const("titleText");
    ::STRINGS[3] = uString::Const("time");
    ::STRINGS[4] = uString::Const("submitbtn");
    ::STRINGS[5] = uString::Const("temp_eb33");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("goBack");
    ::STRINGS[8] = uString::Const("period");
    ::STRINGS[9] = uString::Const("pay");
    ::STRINGS[10] = uString::Const("workingday");
    ::STRINGS[11] = uString::Const("workinghour");
    ::STRINGS[12] = uString::Const("accountNum");
    ::STRINGS[13] = uString::Const("storeNum");
    ::STRINGS[14] = uString::Const("submit");
    ::STRINGS[15] = uString::Const("Pages/individual/contract.ux");
    ::STRINGS[16] = uString::Const("\352\263\204\354\225\275\354\213\240\354\262\255");
    ::STRINGS[17] = uString::Const("albaChain \352\263\204\354\225\275\354\204\234");
    ::STRINGS[18] = uString::Const("\352\263\204\354\225\275\355\231\225\354\235\270");
    ::STRINGS[19] = uString::Const("\352\263\204\354\225\275\352\270\260\352\260\204");
    ::STRINGS[20] = uString::Const("\352\263\204\354\225\275\352\270\260\352\260\204 \354\204\240\355\203\235\353\236\200 ");
    ::STRINGS[21] = uString::Const("\354\236\204        \352\270\210");
    ::STRINGS[22] = uString::Const("\354\236\204\352\270\210 \354\236\205\353\240\245\353\236\200 ");
    ::STRINGS[23] = uString::Const("\352\267\274\353\241\234\354\232\224\354\235\274");
    ::STRINGS[24] = uString::Const("\354\233\224\355\231\224\354\210\230\353\252\251\352\270\210\355\206\240\354\235\274 ");
    ::STRINGS[25] = uString::Const("\352\267\274\353\241\234\354\213\234\352\260\204");
    ::STRINGS[26] = uString::Const("\352\267\274\353\254\264 \354\213\234\352\260\204 \354\236\205\353\240\245 ");
    ::STRINGS[27] = uString::Const("\352\263\204        \354\242\214");
    ::STRINGS[28] = uString::Const("\352\263\204\354\242\214 \354\236\205\353\240\245\353\236\200 ");
    ::STRINGS[29] = uString::Const("\353\247\244\354\236\245 \352\263\240\354\234\240 \353\262\210\355\230\270");
    ::STRINGS[30] = uString::Const("_ _ _ _ _ _ _");
    ::STRINGS[31] = uString::Const("\354\213\240\354\262\255\355\225\230\352\270\260");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::albachain_bundle_typeof());
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
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(contract, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(contract, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(contract, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(contract, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(contract, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(contract, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(contract, temp5_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(contract, temp_eb32), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(contract, titleText), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(contract, time), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(contract, submitbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(contract, temp_eb33), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(contract, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&contract::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&contract::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&contract::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&contract::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&contract::__selector3_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)contract__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* contract_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 144;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(contract);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("contract", options);
    type->fp_build_ = contract_build;
    type->fp_cctor_ = contract__cctor_4_fn;
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

// public contract(Fuse.Navigation.Router router) :29
void contract__ctor_8_fn(contract* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :35
void contract__InitializeUX_fn(contract* __this)
{
    __this->InitializeUX();
}

// public contract New(Fuse.Navigation.Router router) :29
void contract__New5_fn(::g::Fuse::Navigation::Router* router1, contract** __retval)
{
    *__retval = contract::New5(router1);
}

uSStrong<uArray*> contract::__g_static_nametable1_;
::g::Uno::UX::Selector contract::__selector0_;
::g::Uno::UX::Selector contract::__selector1_;
::g::Uno::UX::Selector contract::__selector2_;
::g::Uno::UX::Selector contract::__selector3_;

// public contract(Fuse.Navigation.Router router) [instance] :29
void contract::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("contract", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :35
void contract::InitializeUX()
{
    uStackFrame __("contract", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, contract::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"goBack"*/]);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp, contract::__selector0_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"period"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp1, contract::__selector0_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"pay"*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp2, contract::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"workingday"*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp3, contract::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"workinghour"*/]);
    ::g::Fuse::Controls::TextInput* temp4 = ::g::Fuse::Controls::TextInput::New3();
    temp4_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp4, contract::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"accountNum"*/]);
    ::g::Fuse::Controls::TextInput* temp5 = ::g::Fuse::Controls::TextInput::New3();
    temp5_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp5, contract::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"storeNum"*/]);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"submit"*/]);
    ::g::Fuse::Reactive::JavaScript* temp14 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ClientPanel* temp15 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp17 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Grid* temp18 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp19 = ::g::Fuse::Controls::Image::New3();
    temp_eb32 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    titleText = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Font* temp20 = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::RobotoBlacke33ab162()));
    ::g::Fuse::Controls::ScrollView* temp21 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp22 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp24 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp25 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp26 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::Text* temp27 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp30 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp31 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp32 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, 3);
    ::g::Fuse::Controls::Text* temp33 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp8, 3);
    time = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp35 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Text* temp38 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp39 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Rectangle* temp40 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp41 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp42 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::Shadow* temp43 = ::g::Fuse::Controls::Shadow::New2();
    ::g::Fuse::Controls::Panel* temp44 = ::g::Fuse::Controls::Panel::New3();
    submitbtn = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp45 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::WhilePressed* temp46 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp47 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp48 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp49 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb33 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp13);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp14->LineNumber(3);
    temp14->FileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp14->SourceLineNumber(3);
    temp14->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::contract7b86f1f2()));
    temp15->SourceLineNumber(4);
    temp15->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp16->Color(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp16->Alignment(4);
    temp16->SourceLineNumber(5);
    temp16->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp17->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp17->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    temp17->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp17->Alignment(1);
    temp17->Margin(::g::Uno::Float4__New2(35.0f, 0.0f, 0.0f, 23.0f));
    temp17->SourceLineNumber(6);
    temp17->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp18->RowCount(1);
    temp18->ColumnCount(3);
    temp18->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp18->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp18->Y(::g::Uno::UX::Size__New1(0.0f, 1));
    temp18->SourceLineNumber(7);
    temp18->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp18, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), titleText);
    temp19->Width(::g::Uno::UX::Size__New1(25.0f, 1));
    temp19->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp19->Alignment(1);
    temp19->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 0.0f, 0.0f));
    temp19->SourceLineNumber(8);
    temp19->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp19, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb32)));
    temp19->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::back0dcaacc8()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb32);
    temp6->SourceLineNumber(8);
    temp6->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    uPtr(titleText)->Value(::STRINGS[16/*"계약신청"*/]);
    uPtr(titleText)->FontSize(25.0f);
    uPtr(titleText)->TextAlignment(1);
    uPtr(titleText)->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    uPtr(titleText)->Alignment(10);
    uPtr(titleText)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(titleText)->Name(contract::__selector1_);
    uPtr(titleText)->SourceLineNumber(10);
    uPtr(titleText)->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    uPtr(titleText)->Font(temp20);
    temp21->Margin(::g::Uno::Float4__New2(0.0f, 60.0f, 0.0f, 0.0f));
    temp21->SourceLineNumber(16);
    temp21->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp22->ItemSpacing(20.0f);
    temp22->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp22->SourceLineNumber(17);
    temp22->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    temp23->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp23->Color(::g::Uno::Float4__New2(0.9960784f, 1.0f, 0.9960784f, 1.0f));
    temp23->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    temp23->Height(::g::Uno::UX::Size__New1(500.0f, 1));
    temp23->SourceLineNumber(19);
    temp23->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    temp24->SourceLineNumber(20);
    temp24->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp25->Alignment(9);
    temp25->SourceLineNumber(21);
    temp25->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    temp26->Color(::g::Uno::Float4__New2(0.8862745f, 0.8901961f, 0.8862745f, 1.0f));
    temp26->Width(::g::Uno::UX::Size__New1(80.0f, 1));
    temp26->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    temp26->Alignment(9);
    temp26->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    temp26->SourceLineNumber(22);
    temp26->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp27->Value(::STRINGS[17/*"albaChain 계약서"*/]);
    temp27->FontSize(20.0f);
    temp27->TextAlignment(0);
    temp27->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp27->Color(::g::Uno::Float4__New2(0.2627451f, 0.2666667f, 0.2627451f, 1.0f));
    temp27->Alignment(10);
    temp27->Margin(::g::Uno::Float4__New2(120.0f, 30.0f, 0.0f, 0.0f));
    temp27->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp27->SourceLineNumber(23);
    temp27->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp28->Color(::g::Uno::Float4__New2(0.8823529f, 0.8901961f, 0.8823529f, 1.0f));
    temp28->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp28->SourceLineNumber(26);
    temp28->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp29->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 10.0f));
    temp29->SourceLineNumber(27);
    temp29->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), time);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp30->Value(::STRINGS[18/*"계약확인"*/]);
    temp30->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp30->Alignment(4);
    temp30->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 0.0f, 0.0f));
    temp30->SourceLineNumber(28);
    temp30->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp31->Value(::STRINGS[19/*"계약기간"*/]);
    temp31->FontSize(15.0f);
    temp31->TextColor(::g::Uno::Float4__New2(0.4039216f, 0.6470588f, 0.8f, 1.0f));
    temp31->Height(::g::Uno::UX::Size__New1(15.0f, 1));
    temp31->Alignment(5);
    temp31->Margin(::g::Uno::Float4__New2(30.0f, 40.0f, 0.0f, 0.0f));
    temp31->SourceLineNumber(29);
    temp31->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp->PlaceholderText(::STRINGS[20/*"계약기간 선택란 "*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.4705882f, 0.4705882f, 0.4705882f, 1.0f));
    temp->FontSize(15.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(4);
    temp->Margin(::g::Uno::Float4__New2(110.0f, 40.0f, 0.0f, 0.0f));
    temp->SourceLineNumber(30);
    temp->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp32);
    temp7->SourceLineNumber(30);
    temp7->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp33->Value(::STRINGS[21/*"임        금"*/]);
    temp33->FontSize(15.0f);
    temp33->TextColor(::g::Uno::Float4__New2(0.4039216f, 0.6470588f, 0.8f, 1.0f));
    temp33->Alignment(5);
    temp33->Margin(::g::Uno::Float4__New2(30.0f, 65.0f, 0.0f, 0.0f));
    temp33->SourceLineNumber(31);
    temp33->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp1->PlaceholderText(::STRINGS[22/*"임금 입력란 "*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.4705882f, 0.4705882f, 0.4705882f, 1.0f));
    temp1->FontSize(15.0f);
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Alignment(4);
    temp1->Margin(::g::Uno::Float4__New2(110.0f, 65.0f, 0.0f, 0.0f));
    temp1->SourceLineNumber(32);
    temp1->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp8->SourceLineNumber(32);
    temp8->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    uPtr(time)->Value(::STRINGS[23/*"근로요일"*/]);
    uPtr(time)->FontSize(15.0f);
    uPtr(time)->TextColor(::g::Uno::Float4__New2(0.4039216f, 0.6470588f, 0.8f, 1.0f));
    uPtr(time)->Alignment(5);
    uPtr(time)->Margin(::g::Uno::Float4__New2(30.0f, 90.0f, 0.0f, 0.0f));
    uPtr(time)->Name(contract::__selector2_);
    uPtr(time)->SourceLineNumber(33);
    uPtr(time)->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp2->PlaceholderText(::STRINGS[24/*"월화수목금토일 "*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.4705882f, 0.4705882f, 0.4705882f, 1.0f));
    temp2->FontSize(15.0f);
    temp2->TextAlignment(0);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->Alignment(4);
    temp2->Margin(::g::Uno::Float4__New2(110.0f, 90.0f, 0.0f, 0.0f));
    temp2->SourceLineNumber(34);
    temp2->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    temp9->SourceLineNumber(34);
    temp9->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp36->Value(::STRINGS[25/*"근로시간"*/]);
    temp36->FontSize(15.0f);
    temp36->TextColor(::g::Uno::Float4__New2(0.4039216f, 0.6470588f, 0.8f, 1.0f));
    temp36->Alignment(5);
    temp36->Margin(::g::Uno::Float4__New2(30.0f, 115.0f, 0.0f, 0.0f));
    temp36->SourceLineNumber(35);
    temp36->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp3->PlaceholderText(::STRINGS[26/*"근무 시간 입력 "*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.4705882f, 0.4705882f, 0.4705882f, 1.0f));
    temp3->FontSize(15.0f);
    temp3->TextAlignment(0);
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->Alignment(4);
    temp3->Margin(::g::Uno::Float4__New2(110.0f, 115.0f, 0.0f, 0.0f));
    temp3->SourceLineNumber(36);
    temp3->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp10->SourceLineNumber(36);
    temp10->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp38->Value(::STRINGS[27/*"계        좌"*/]);
    temp38->FontSize(15.0f);
    temp38->TextColor(::g::Uno::Float4__New2(0.4039216f, 0.6470588f, 0.8f, 1.0f));
    temp38->Alignment(5);
    temp38->Margin(::g::Uno::Float4__New2(30.0f, 140.0f, 0.0f, 0.0f));
    temp38->SourceLineNumber(37);
    temp38->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp4->PlaceholderText(::STRINGS[28/*"계좌 입력란 "*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.4705882f, 0.4705882f, 0.4705882f, 1.0f));
    temp4->FontSize(15.0f);
    temp4->TextAlignment(0);
    temp4->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->Alignment(4);
    temp4->Margin(::g::Uno::Float4__New2(110.0f, 140.0f, 0.0f, 0.0f));
    temp4->SourceLineNumber(38);
    temp4->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp39);
    temp11->SourceLineNumber(38);
    temp11->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp40->Color(::g::Uno::Float4__New2(0.8823529f, 0.8901961f, 0.8823529f, 1.0f));
    temp40->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp40->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp40->SourceLineNumber(40);
    temp40->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp41->Value(::STRINGS[29/*"매장 고유 번호"*/]);
    temp41->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp41->Margin(::g::Uno::Float4__New2(30.0f, 20.0f, 0.0f, 0.0f));
    temp41->SourceLineNumber(41);
    temp41->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp5->PlaceholderText(::STRINGS[30/*"_ _ _ _ _ _ _"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.4705882f, 0.4705882f, 0.4705882f, 1.0f));
    temp5->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Alignment(2);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp5->SourceLineNumber(42);
    temp5->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp42);
    temp12->SourceLineNumber(42);
    temp12->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp43->Angle(107.0f);
    temp43->SourceLineNumber(44);
    temp43->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp44->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 50.0f));
    temp44->SourceLineNumber(47);
    temp44->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp44->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), submitbtn);
    uPtr(submitbtn)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(submitbtn)->Color(::g::Uno::Float4__New2(0.3803922f, 0.6f, 0.7529412f, 1.0f));
    uPtr(submitbtn)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(submitbtn)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(submitbtn)->Alignment(3);
    uPtr(submitbtn)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 40.0f, 0.0f));
    uPtr(submitbtn)->Name(contract::__selector3_);
    uPtr(submitbtn)->SourceLineNumber(48);
    uPtr(submitbtn)->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(submitbtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(submitbtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(submitbtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    temp45->Value(::STRINGS[31/*"신청하기"*/]);
    temp45->TextAlignment(1);
    temp45->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp45->Alignment(10);
    temp45->SourceLineNumber(49);
    temp45->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp46->SourceLineNumber(50);
    temp46->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp46->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp47);
    temp47->Factor(0.9f);
    temp47->Duration(0.05);
    temp47->Target(submitbtn);
    temp48->SourceLineNumber(53);
    temp48->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb33);
    temp49->SourceLineNumber(54);
    temp49->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    temp49->add_Handler(uDelegate::New(::TYPES[6/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb33)));
    temp13->SourceLineNumber(54);
    temp13->SourceFileName(::STRINGS[15/*"Pages/indiv...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), titleText);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), time);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), submitbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
}

// public contract New(Fuse.Navigation.Router router) [static] :29
contract* contract::New5(::g::Fuse::Navigation::Router* router1)
{
    contract* obj1 = (contract*)uNew(contract_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
