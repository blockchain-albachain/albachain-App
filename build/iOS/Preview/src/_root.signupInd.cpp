// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/signupInd.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseControlsTextInputControl_Value_Property.h>
#include <_root.signupInd.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layer.h>
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
static uString* STRINGS[33];
static uType* TYPES[9];

namespace g{

// public partial sealed class signupInd :2
// {
// static signupInd() :22
static void signupInd__cctor_4_fn(uType* __type)
{
    signupInd::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb44"*/], ::STRINGS[2/*"signupbtn"*/], ::STRINGS[3/*"temp_eb45"*/]);
    signupInd::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Value"*/]);
    signupInd::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"signupbtn"*/]);
}

static void signupInd_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb44");
    ::STRINGS[2] = uString::Const("signupbtn");
    ::STRINGS[3] = uString::Const("temp_eb45");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("goBack");
    ::STRINGS[6] = uString::Const("newID");
    ::STRINGS[7] = uString::Const("newPW");
    ::STRINGS[8] = uString::Const("newName");
    ::STRINGS[9] = uString::Const("dayOfbirth");
    ::STRINGS[10] = uString::Const("sex");
    ::STRINGS[11] = uString::Const("phoneNum");
    ::STRINGS[12] = uString::Const("Save");
    ::STRINGS[13] = uString::Const("Pages/individual/signupInd.ux");
    ::STRINGS[14] = uString::Const("Create");
    ::STRINGS[15] = uString::Const("an account");
    ::STRINGS[16] = uString::Const("\354\225\275\352\264\200 \353\217\231\354\235\230\353\236\200");
    ::STRINGS[17] = uString::Const("\354\225\204\354\235\264\353\224\224");
    ::STRINGS[18] = uString::Const("\354\230\201\353\254\270,\354\210\253\354\236\220\353\245\274 \355\217\254\355\225\250\355\225\234 6~16\354\236\220");
    ::STRINGS[19] = uString::Const("\353\271\204\353\260\200\353\262\210\355\230\270");
    ::STRINGS[20] = uString::Const("\354\230\201\353\254\270, \354\210\253\354\236\220, \355\212\271\354\210\230\353\254\270\354\236\220 \355\217\254\355\225\250\355\225\234 6~16\354\236\220 ");
    ::STRINGS[21] = uString::Const("\353\271\204\353\260\200\353\262\210\355\230\270 \355\231\225\354\235\270");
    ::STRINGS[22] = uString::Const("\355\225\234\353\262\210\353\215\224 \354\236\205\353\240\245\355\225\264\354\243\274\354\204\270\354\232\224.");
    ::STRINGS[23] = uString::Const("\354\235\264\353\246\204");
    ::STRINGS[24] = uString::Const("\354\235\264\353\246\204\354\236\205\353\240\245");
    ::STRINGS[25] = uString::Const("\354\203\235\353\205\204\354\233\224\354\235\274");
    ::STRINGS[26] = uString::Const("\354\203\235\353\205\204\354\233\224\354\235\274 6\354\236\220\353\246\254 ex) 950621");
    ::STRINGS[27] = uString::Const("\354\204\261\353\263\204");
    ::STRINGS[28] = uString::Const("\353\202\250\354\204\261, \354\227\254\354\204\261");
    ::STRINGS[29] = uString::Const("\355\234\264\353\214\200\355\217\260 \353\262\210\355\230\270");
    ::STRINGS[30] = uString::Const("010 - ");
    ::STRINGS[31] = uString::Const("\355\234\264\353\214\200\355\217\260 \353\262\210\355\230\270 8\354\236\220\353\246\254");
    ::STRINGS[32] = uString::Const("Sign-up");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(signupInd, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(signupInd, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(signupInd, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(signupInd, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(signupInd, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(signupInd, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(signupInd, temp5_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(signupInd, temp6_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(signupInd, temp_eb44), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(signupInd, signupbtn), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(signupInd, temp_eb45), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(signupInd, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&signupInd::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&signupInd::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&signupInd::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)signupInd__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* signupInd_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 141;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(signupInd);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("signupInd", options);
    type->fp_build_ = signupInd_build;
    type->fp_cctor_ = signupInd__cctor_4_fn;
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

// public signupInd(Fuse.Navigation.Router router) :26
void signupInd__ctor_8_fn(signupInd* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :32
void signupInd__InitializeUX_fn(signupInd* __this)
{
    __this->InitializeUX();
}

// public signupInd New(Fuse.Navigation.Router router) :26
void signupInd__New5_fn(::g::Fuse::Navigation::Router* router1, signupInd** __retval)
{
    *__retval = signupInd::New5(router1);
}

uSStrong<uArray*> signupInd::__g_static_nametable1_;
::g::Uno::UX::Selector signupInd::__selector0_;
::g::Uno::UX::Selector signupInd::__selector1_;

// public signupInd(Fuse.Navigation.Router router) [instance] :26
void signupInd::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("signupInd", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :32
void signupInd::InitializeUX()
{
    uStackFrame __("signupInd", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, signupInd::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"goBack"*/]);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp, signupInd::__selector0_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"newID"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp1, signupInd::__selector0_);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"newPW"*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp2, signupInd::__selector0_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"newPW"*/]);
    ::g::Fuse::Controls::TextInput* temp3 = ::g::Fuse::Controls::TextInput::New3();
    temp3_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp3, signupInd::__selector0_);
    ::g::Fuse::Reactive::Data* temp11 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"newName"*/]);
    ::g::Fuse::Controls::TextInput* temp4 = ::g::Fuse::Controls::TextInput::New3();
    temp4_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp4, signupInd::__selector0_);
    ::g::Fuse::Reactive::Data* temp12 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"dayOfbirth"*/]);
    ::g::Fuse::Controls::TextInput* temp5 = ::g::Fuse::Controls::TextInput::New3();
    temp5_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp5, signupInd::__selector0_);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"sex"*/]);
    ::g::Fuse::Controls::TextInput* temp6 = ::g::Fuse::Controls::TextInput::New3();
    temp6_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp6, signupInd::__selector0_);
    ::g::Fuse::Reactive::Data* temp14 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"phoneNum"*/]);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"Save"*/]);
    ::g::Fuse::Reactive::JavaScript* temp16 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::ScrollView* temp17 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp18 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp19 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp21 = ::g::Fuse::Controls::Image::New3();
    temp_eb44 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7);
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp23 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp24 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp25 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::Stroke* temp26 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Rectangle* temp27 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp8, 3);
    ::g::Fuse::Controls::Rectangle* temp30 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp31 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp32 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp9, 3);
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp36 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Controls::Rectangle* temp38 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp39 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp40 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp41 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp11, 3);
    ::g::Fuse::Controls::Rectangle* temp42 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp43 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp44 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp45 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Controls::Rectangle* temp46 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp47 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp48 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp49 = ::g::Fuse::Reactive::DataBinding::New1(temp5_Value_inst, (uObject*)temp13, 3);
    ::g::Fuse::Controls::Rectangle* temp50 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp51 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp52 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp53 = ::g::Fuse::Reactive::DataBinding::New1(temp6_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Controls::Rectangle* temp54 = ::g::Fuse::Controls::Rectangle::New3();
    signupbtn = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp55 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp56 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::WhilePressed* temp57 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp58 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp59 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp60 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb45 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp16->LineNumber(3);
    temp16->FileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp16->SourceLineNumber(3);
    temp16->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp16->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::signupInd91c44217()));
    temp17->SourceLineNumber(5);
    temp17->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    temp18->Width(::g::Uno::UX::Size__New1(360.0f, 1));
    temp18->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp18->SourceLineNumber(6);
    temp18->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), signupbtn);
    temp19->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp19->SourceLineNumber(7);
    temp19->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp20->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp20->Height(::g::Uno::UX::Size__New1(10.0f, 1));
    temp20->Alignment(12);
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 2.0f));
    temp20->SourceLineNumber(8);
    temp20->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp21->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp21->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp21->Alignment(5);
    temp21->Margin(::g::Uno::Float4__New2(40.0f, 20.0f, 0.0f, 0.0f));
    temp21->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp21->Layer(2);
    temp21->SourceLineNumber(9);
    temp21->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp21, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb44)));
    temp21->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::back0dcaacc8()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb44);
    temp7->SourceLineNumber(9);
    temp7->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp22->Value(::STRINGS[14/*"Create"*/]);
    temp22->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp22->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 0.0f, 0.0f));
    temp22->SourceLineNumber(11);
    temp22->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp23->Value(::STRINGS[15/*"an account"*/]);
    temp23->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp23->Margin(::g::Uno::Float4__New2(40.0f, 0.0f, 0.0f, 0.0f));
    temp23->SourceLineNumber(12);
    temp23->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp24->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp24->Height(::g::Uno::UX::Size__New1(120.0f, 1));
    temp24->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp24->SourceLineNumber(13);
    temp24->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Strokes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp25->Value(::STRINGS[16/*"약관 동의란"*/]);
    temp25->TextAlignment(1);
    temp25->Alignment(10);
    temp25->SourceLineNumber(14);
    temp25->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp26->Color(::g::Uno::Float4__New2(0.5882353f, 0.5921569f, 0.5882353f, 1.0f));
    temp26->Width(1.0f);
    temp27->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp27->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp27->SourceLineNumber(18);
    temp27->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    temp28->Value(::STRINGS[17/*"아이디"*/]);
    temp28->FontSize(12.0f);
    temp28->TextAlignment(1);
    temp28->Alignment(9);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp28->SourceLineNumber(19);
    temp28->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp->PlaceholderText(::STRINGS[18/*"영문,숫자를 포함한 ...*/]);
    temp->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp->FontSize(10.0f);
    temp->TextAlignment(0);
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp->Alignment(0);
    temp->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp->SourceLineNumber(20);
    temp->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp8->SourceLineNumber(20);
    temp8->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp30->Color(::g::Uno::Float4__New2(0.8823529f, 0.8862745f, 0.8823529f, 1.0f));
    temp30->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp30->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp30->Alignment(15);
    temp30->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp30->SourceLineNumber(21);
    temp30->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp31->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp31->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp31->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp31->SourceLineNumber(24);
    temp31->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    temp32->Value(::STRINGS[19/*"비밀번호"*/]);
    temp32->FontSize(12.0f);
    temp32->TextAlignment(1);
    temp32->Alignment(9);
    temp32->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp32->SourceLineNumber(25);
    temp32->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp1->PlaceholderText(::STRINGS[20/*"영문, 숫자, 특수문...*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp1->FontSize(10.0f);
    temp1->TextAlignment(0);
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp1->Alignment(0);
    temp1->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp1->SourceLineNumber(26);
    temp1->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp9->SourceLineNumber(26);
    temp9->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp34->Color(::g::Uno::Float4__New2(0.8823529f, 0.8862745f, 0.8823529f, 1.0f));
    temp34->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp34->Alignment(15);
    temp34->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp34->SourceLineNumber(27);
    temp34->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp35->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp35->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp35->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp35->SourceLineNumber(30);
    temp35->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp36->Value(::STRINGS[21/*"비밀번호 확인"*/]);
    temp36->FontSize(12.0f);
    temp36->TextAlignment(1);
    temp36->Alignment(9);
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp36->SourceLineNumber(31);
    temp36->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp2->PlaceholderText(::STRINGS[22/*"한번더 입력해주세요."*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp2->FontSize(10.0f);
    temp2->TextAlignment(0);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp2->Alignment(0);
    temp2->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp2->SourceLineNumber(32);
    temp2->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp2, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp10->SourceLineNumber(32);
    temp10->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp38->Color(::g::Uno::Float4__New2(0.8823529f, 0.8862745f, 0.8823529f, 1.0f));
    temp38->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp38->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp38->Alignment(15);
    temp38->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp38->SourceLineNumber(33);
    temp38->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp39->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp39->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp39->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp39->SourceLineNumber(36);
    temp39->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp40);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp42);
    temp40->Value(::STRINGS[23/*"이름"*/]);
    temp40->FontSize(12.0f);
    temp40->TextAlignment(1);
    temp40->Alignment(9);
    temp40->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp40->SourceLineNumber(37);
    temp40->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp3->PlaceholderText(::STRINGS[24/*"이름입력"*/]);
    temp3->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp3->FontSize(10.0f);
    temp3->TextAlignment(0);
    temp3->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp3->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp3->Alignment(0);
    temp3->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp3->SourceLineNumber(38);
    temp3->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp3, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp41);
    temp11->SourceLineNumber(38);
    temp11->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp42->Color(::g::Uno::Float4__New2(0.8823529f, 0.8862745f, 0.8823529f, 1.0f));
    temp42->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp42->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp42->Alignment(15);
    temp42->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp42->SourceLineNumber(39);
    temp42->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp43->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp43->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp43->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp43->SourceLineNumber(42);
    temp43->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp46);
    temp44->Value(::STRINGS[25/*"생년월일"*/]);
    temp44->FontSize(12.0f);
    temp44->TextAlignment(1);
    temp44->Alignment(9);
    temp44->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp44->SourceLineNumber(43);
    temp44->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp4->PlaceholderText(::STRINGS[26/*"생년월일 6자리 ex...*/]);
    temp4->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp4->MaxLength(6);
    temp4->FontSize(10.0f);
    temp4->TextAlignment(0);
    temp4->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->InputHint(4);
    temp4->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp4->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp4->Alignment(0);
    temp4->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp4->SourceLineNumber(44);
    temp4->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp4, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp4, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp45);
    temp12->SourceLineNumber(44);
    temp12->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp46->Color(::g::Uno::Float4__New2(0.8823529f, 0.8862745f, 0.8823529f, 1.0f));
    temp46->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp46->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp46->Alignment(15);
    temp46->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp46->SourceLineNumber(45);
    temp46->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp47->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp47->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp47->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp47->SourceLineNumber(48);
    temp47->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp48->Value(::STRINGS[27/*"성별"*/]);
    temp48->FontSize(12.0f);
    temp48->TextAlignment(1);
    temp48->Alignment(9);
    temp48->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp48->SourceLineNumber(49);
    temp48->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp5->PlaceholderText(::STRINGS[28/*"남성, 여성"*/]);
    temp5->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp5->MaxLength(3);
    temp5->FontSize(13.0f);
    temp5->TextAlignment(0);
    temp5->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp5->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp5->Alignment(0);
    temp5->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp5->SourceLineNumber(51);
    temp5->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp5, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp5, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp49);
    temp13->SourceLineNumber(51);
    temp13->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp50->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    temp50->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp50->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 0.0f));
    temp50->SourceLineNumber(54);
    temp50->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp51);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    temp51->Value(::STRINGS[29/*"휴대폰 번호"*/]);
    temp51->FontSize(12.0f);
    temp51->TextAlignment(1);
    temp51->Alignment(9);
    temp51->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp51->SourceLineNumber(55);
    temp51->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp52->Value(::STRINGS[30/*"010 - "*/]);
    temp52->FontSize(10.0f);
    temp52->TextAlignment(1);
    temp52->TextColor(::g::Uno::Float4__New2(0.6627451f, 0.6666667f, 0.6627451f, 1.0f));
    temp52->Alignment(9);
    temp52->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp52->SourceLineNumber(56);
    temp52->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp6->PlaceholderText(::STRINGS[31/*"휴대폰 번호 8자리"*/]);
    temp6->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp6->MaxLength(11);
    temp6->FontSize(10.0f);
    temp6->TextAlignment(0);
    temp6->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp6->InputHint(3);
    temp6->CaretColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp6->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp6->Alignment(0);
    temp6->Margin(::g::Uno::Float4__New2(105.0f, 0.0f, 0.0f, 0.0f));
    temp6->SourceLineNumber(57);
    temp6->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp6, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp6, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp53);
    temp14->SourceLineNumber(57);
    temp14->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp54->Color(::g::Uno::Float4__New2(0.8823529f, 0.8862745f, 0.8823529f, 1.0f));
    temp54->Width(::g::Uno::UX::Size__New1(180.0f, 1));
    temp54->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp54->Alignment(15);
    temp54->Margin(::g::Uno::Float4__New2(95.0f, 0.0f, 0.0f, 0.0f));
    temp54->SourceLineNumber(58);
    temp54->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    uPtr(signupbtn)->Width(::g::Uno::UX::Size__New1(280.0f, 1));
    uPtr(signupbtn)->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    uPtr(signupbtn)->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 100.0f));
    uPtr(signupbtn)->Name(signupInd::__selector1_);
    uPtr(signupbtn)->SourceLineNumber(61);
    uPtr(signupbtn)->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupbtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupbtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupbtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(signupbtn)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp59);
    temp55->Value(::STRINGS[32/*"Sign-up"*/]);
    temp55->FontSize(20.0f);
    temp55->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp55->Alignment(10);
    temp55->SourceLineNumber(62);
    temp55->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp56->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    temp56->Color(::g::Uno::Float4__New2(0.3411765f, 0.6039216f, 0.7490196f, 1.0f));
    temp56->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp56->SourceLineNumber(63);
    temp56->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp57->SourceLineNumber(64);
    temp57->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Animators()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp58);
    temp58->Factor(0.9f);
    temp58->Duration(0.05);
    temp58->Target(signupbtn);
    temp59->SourceLineNumber(67);
    temp59->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Actions()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp59->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb45);
    temp60->SourceLineNumber(68);
    temp60->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    temp60->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb45)));
    temp15->SourceLineNumber(68);
    temp15->SourceFileName(::STRINGS[13/*"Pages/indiv...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), signupbtn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
}

// public signupInd New(Fuse.Navigation.Router router) [static] :26
signupInd* signupInd::New5(::g::Fuse::Navigation::Router* router1)
{
    signupInd* obj1 = (signupInd*)uNew(signupInd_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
