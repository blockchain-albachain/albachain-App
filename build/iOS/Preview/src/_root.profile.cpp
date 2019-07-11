// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/profile.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.albachain_FuseControlsTextControl_Value_Property.h>
#include <_root.albachain_FuseControlsTextInputControl_Value_Property.h>
#include <_root.profile.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
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
static uString* STRINGS[17];
static uType* TYPES[8];

namespace g{

// public partial sealed class profile :2
// {
// static profile() :16
static void profile__cctor_4_fn(uType* __type)
{
    profile::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb25"*/], ::STRINGS[2/*"temp_eb26"*/]);
    profile::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Value"*/]);
}

static void profile_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb25");
    ::STRINGS[2] = uString::Const("temp_eb26");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("restart");
    ::STRINGS[5] = uString::Const("\353\202\264 \354\275\224\354\235\270 \355\230\204\355\231\251 : ");
    ::STRINGS[6] = uString::Const("coin");
    ::STRINGS[7] = uString::Const(" ether");
    ::STRINGS[8] = uString::Const("\354\212\244\353\247\210\355\212\270 \354\273\250\355\212\270\353\240\211\355\212\270 \354\275\224\354\235\270 : ");
    ::STRINGS[9] = uString::Const("upCoin");
    ::STRINGS[10] = uString::Const("coinUp");
    ::STRINGS[11] = uString::Const("sendCoin");
    ::STRINGS[12] = uString::Const("Pages/business/profile.ux");
    ::STRINGS[13] = uString::Const("\354\202\254\354\232\251\354\236\220 \353\213\230");
    ::STRINGS[14] = uString::Const("\354\230\254\353\246\254\352\270\260");
    ::STRINGS[15] = uString::Const("\354\225\214\353\260\224\354\275\224\354\235\270 \354\236\205\353\240\245\353\236\200 ");
    ::STRINGS[16] = uString::Const("\353\241\234\352\267\270\354\225\204\354\233\203");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
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
        ::g::Fuse::Navigation::Router_typeof(), offsetof(profile, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(profile, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(profile, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(profile, temp2_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(profile, temp_eb25), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(profile, temp_eb26), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(profile, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&profile::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&profile::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)profile__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* profile_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 135;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(profile);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("profile", options);
    type->fp_build_ = profile_build;
    type->fp_cctor_ = profile__cctor_4_fn;
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

// public profile(Fuse.Navigation.Router router) :20
void profile__ctor_8_fn(profile* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :26
void profile__InitializeUX_fn(profile* __this)
{
    __this->InitializeUX();
}

// public profile New(Fuse.Navigation.Router router) :20
void profile__New5_fn(::g::Fuse::Navigation::Router* router1, profile** __retval)
{
    *__retval = profile::New5(router1);
}

uSStrong<uArray*> profile::__g_static_nametable1_;
::g::Uno::UX::Selector profile::__selector0_;

// public profile(Fuse.Navigation.Router router) [instance] :20
void profile::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("profile", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :26
void profile::InitializeUX()
{
    uStackFrame __("profile", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, profile::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"restart"*/]);
    uString* temp4 = ::STRINGS[5/*"내 코인 현황 : "*/];
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(temp4);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"coin"*/]);
    uString* temp7 = ::STRINGS[7/*" ether"*/];
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(temp7);
    ::g::Fuse::Reactive::Add* temp9 = ::g::Fuse::Reactive::Add::New1(temp6, temp8);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::albachain_FuseControlsTextControl_Value_Property::New1(temp, profile::__selector0_);
    ::g::Fuse::Reactive::Add* temp10 = ::g::Fuse::Reactive::Add::New1(temp5, temp9);
    uString* temp11 = ::STRINGS[8/*"스마트 컨트렉트 코인...*/];
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(temp11);
    ::g::Fuse::Reactive::Data* temp13 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"upCoin"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::albachain_FuseControlsTextControl_Value_Property::New1(temp1, profile::__selector0_);
    ::g::Fuse::Reactive::Add* temp14 = ::g::Fuse::Reactive::Add::New1(temp12, temp13);
    ::g::Fuse::Reactive::Data* temp15 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"coinUp"*/]);
    ::g::Fuse::Controls::TextInput* temp2 = ::g::Fuse::Controls::TextInput::New3();
    temp2_Value_inst = ::g::albachain_FuseControlsTextInputControl_Value_Property::New1(temp2, profile::__selector0_);
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"sendCoin"*/]);
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Circle* temp21 = ::g::Fuse::Controls::Circle::New3();
    temp_eb25 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Fuse::Controls::Text* temp22 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp23 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::StackPanel* temp24 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp10, 3);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp14, 3);
    ::g::Fuse::Drawing::Stroke* temp27 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Rectangle* temp28 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp30 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp31 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp32 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb26 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp15);
    ::g::Fuse::Controls::Rectangle* temp33 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp16, 3);
    ::g::Fuse::Drawing::Stroke* temp35 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp37 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp38 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8156863f, 0.8196079f, 0.8156863f, 0.5372549f));
    ::g::Fuse::Drawing::StaticSolidColor* temp39 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp17->LineNumber(3);
    temp17->FileName(::STRINGS[12/*"Pages/busin...*/]);
    temp17->SourceLineNumber(3);
    temp17->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp17->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::profile93e6938a()));
    temp18->Alignment(4);
    temp18->SourceLineNumber(5);
    temp18->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp18->Background(temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp19->Margin(::g::Uno::Float4__New2(0.0f, 120.0f, 0.0f, 0.0f));
    temp19->SourceLineNumber(6);
    temp19->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp20->SourceLineNumber(7);
    temp20->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    temp21->Color(::g::Uno::Float4__New2(0.8196079f, 0.8196079f, 0.8196079f, 1.0f));
    temp21->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp21->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp21->Alignment(1);
    temp21->Margin(::g::Uno::Float4__New2(60.0f, 0.0f, 0.0f, 0.0f));
    temp21->SourceLineNumber(8);
    temp21->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp21, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb25)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb25);
    temp3->SourceLineNumber(8);
    temp3->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp22->Value(::STRINGS[13/*"사용자 님"*/]);
    temp22->FontSize(15.0f);
    temp22->Alignment(11);
    temp22->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 100.0f, 0.0f));
    temp22->SourceLineNumber(9);
    temp22->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp23->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp23->Height(::g::Uno::UX::Size__New1(200.0f, 1));
    temp23->Margin(::g::Uno::Float4__New2(0.0f, 50.0f, 0.0f, 0.0f));
    temp23->SourceLineNumber(11);
    temp23->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Strokes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp24->ItemSpacing(20.0f);
    temp24->Alignment(10);
    temp24->SourceLineNumber(12);
    temp24->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp->FontSize(14.0f);
    temp->Alignment(10);
    temp->SourceLineNumber(13);
    temp->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp10->SourceLineNumber(13);
    temp10->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp5->SourceLineNumber(13);
    temp5->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp9->SourceLineNumber(13);
    temp9->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp6->SourceLineNumber(13);
    temp6->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp8->SourceLineNumber(13);
    temp8->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp1->FontSize(14.0f);
    temp1->Alignment(10);
    temp1->SourceLineNumber(14);
    temp1->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    temp14->SourceLineNumber(14);
    temp14->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp12->SourceLineNumber(14);
    temp12->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp13->SourceLineNumber(14);
    temp13->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp27->Color(::g::Uno::Float4__New2(0.8823529f, 0.8901961f, 0.8823529f, 1.0f));
    temp27->Width(1.0f);
    temp28->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp28->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp28->Alignment(0);
    temp28->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 0.0f));
    temp28->SourceLineNumber(19);
    temp28->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp29->Color(::g::Uno::Float4__New2(0.8862745f, 0.8862745f, 0.8862745f, 1.0f));
    temp29->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp29->Alignment(11);
    temp29->SourceLineNumber(20);
    temp29->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp30->Value(::STRINGS[14/*"올리기"*/]);
    temp30->FontSize(14.0f);
    temp30->TextAlignment(1);
    temp30->Alignment(10);
    temp30->SourceLineNumber(21);
    temp30->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp31->SourceLineNumber(22);
    temp31->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb26);
    temp32->SourceLineNumber(23);
    temp32->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp32->add_Handler(uDelegate::New(::TYPES[6/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb26)));
    temp15->SourceLineNumber(23);
    temp15->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp33->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp33->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp33->Alignment(9);
    temp33->SourceLineNumber(26);
    temp33->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Strokes()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->PlaceholderText(::STRINGS[15/*"알바코인 입력란 "*/]);
    temp2->PlaceholderColor(::g::Uno::Float4__New2(0.4705882f, 0.4705882f, 0.4705882f, 1.0f));
    temp2->FontSize(14.0f);
    temp2->TextAlignment(0);
    temp2->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp2->Alignment(2);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp2->SourceLineNumber(27);
    temp2->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    temp16->SourceLineNumber(27);
    temp16->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp35->Color(::g::Uno::Float4__New2(0.8823529f, 0.8901961f, 0.8823529f, 1.0f));
    temp35->Width(1.0f);
    temp36->Height(::g::Uno::UX::Size__New1(500.0f, 1));
    temp36->Alignment(0);
    temp36->Margin(::g::Uno::Float4__New2(0.0f, 40.0f, 0.0f, 0.0f));
    temp36->SourceLineNumber(31);
    temp36->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    temp36->Background(temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp37->Value(::STRINGS[16/*"로그아웃"*/]);
    temp37->FontSize(10.0f);
    temp37->Alignment(7);
    temp37->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 20.0f, 0.0f));
    temp37->SourceLineNumber(32);
    temp37->SourceFileName(::STRINGS[12/*"Pages/busin...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
}

// public profile New(Fuse.Navigation.Router router) [static] :20
profile* profile::New5(::g::Fuse::Navigation::Router* router1)
{
    profile* obj1 = (profile*)uNew(profile_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
