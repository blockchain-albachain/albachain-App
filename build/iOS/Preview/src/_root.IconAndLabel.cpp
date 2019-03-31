// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/IconAndLabel.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_accessor_IconAndLabel_Text.h>
#include <_root.albachain_FuseControlsTextControl_Value_Property.h>
#include <_root.BaseText.h>
#include <_root.IconAndLabel.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[2];

namespace g{

// public partial sealed class IconAndLabel :2
// {
// static IconAndLabel() :21
static void IconAndLabel__cctor_4_fn(uType* __type)
{
    IconAndLabel::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    IconAndLabel::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"iconContainer"*/]);
}

static void IconAndLabel_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("iconContainer");
    ::STRINGS[2] = uString::Const("Components/BottomBar.ux");
    ::STRINGS[3] = uString::Const("Text");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::albachain_accessor_IconAndLabel_Text_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(122,
        ::g::Uno::String_typeof(), offsetof(IconAndLabel, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(IconAndLabel, temp_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(IconAndLabel, iconContainer), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&IconAndLabel::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&IconAndLabel::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)IconAndLabel__New5_fn, 0, true, type, 0),
        new uFunction("SetText", NULL, (void*)IconAndLabel__SetText_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Text", NULL, (void*)IconAndLabel__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)IconAndLabel__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* IconAndLabel_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Container_typeof();
    options.FieldCount = 127;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(IconAndLabel);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("IconAndLabel", options);
    type->fp_build_ = IconAndLabel_build;
    type->fp_ctor_ = (void*)IconAndLabel__New5_fn;
    type->fp_cctor_ = IconAndLabel__cctor_4_fn;
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

// public IconAndLabel() :25
void IconAndLabel__ctor_8_fn(IconAndLabel* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :29
void IconAndLabel__InitializeUX_fn(IconAndLabel* __this)
{
    __this->InitializeUX();
}

// public IconAndLabel New() :25
void IconAndLabel__New5_fn(IconAndLabel** __retval)
{
    *__retval = IconAndLabel::New5();
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :11
void IconAndLabel__SetText_fn(IconAndLabel* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Text() :8
void IconAndLabel__get_Text_fn(IconAndLabel* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :9
void IconAndLabel__set_Text_fn(IconAndLabel* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector IconAndLabel::__selector0_;
::g::Uno::UX::Selector IconAndLabel::__selector1_;

// public IconAndLabel() [instance] :25
void IconAndLabel::ctor_8()
{
    uStackFrame __("IconAndLabel", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :29
void IconAndLabel::InitializeUX()
{
    uStackFrame __("IconAndLabel", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::BaseText* temp = ::g::BaseText::New4();
    temp_Value_inst = ::g::albachain_FuseControlsTextControl_Value_Property::New1(temp, IconAndLabel::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::albachain_accessor_IconAndLabel_Text::Singleton());
    ::g::Fuse::Controls::DockPanel* temp3 = ::g::Fuse::Controls::DockPanel::New4();
    iconContainer = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp4 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    SourceLineNumber(5);
    SourceFileName(::STRINGS[2/*"Components/...*/]);
    temp3->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp3->Padding(::g::Uno::Float4__New2(0.0f, 7.0f, 0.0f, 7.0f));
    temp3->SourceLineNumber(8);
    temp3->SourceFileName(::STRINGS[2/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), iconContainer);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    uPtr(iconContainer)->Alignment(10);
    uPtr(iconContainer)->Name(IconAndLabel::__selector1_);
    uPtr(iconContainer)->SourceLineNumber(9);
    uPtr(iconContainer)->SourceFileName(::STRINGS[2/*"Components/...*/]);
    temp->FontSize(8.0f);
    temp->Color(::g::Uno::Float4__New2(0.6666667f, 0.6666667f, 0.6666667f, 1.0f));
    temp->Alignment(2);
    temp->SourceLineNumber(10);
    temp->SourceFileName(::STRINGS[2/*"Components/...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp4);
    temp2->SourceLineNumber(10);
    temp2->SourceFileName(::STRINGS[2/*"Components/...*/]);
    temp1->SourceLineNumber(10);
    temp1->SourceFileName(::STRINGS[2/*"Components/...*/]);
    Subtree(iconContainer);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :11
void IconAndLabel::SetText(uString* value, uObject* origin)
{
    uStackFrame __("IconAndLabel", "SetText(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Text"*/]), origin);
    }
}

// public string get_Text() [instance] :8
uString* IconAndLabel::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :9
void IconAndLabel::Text(uString* value)
{
    uStackFrame __("IconAndLabel", "set_Text(string)");
    SetText(value, NULL);
}

// public IconAndLabel New() [static] :25
IconAndLabel* IconAndLabel::New5()
{
    IconAndLabel* obj1 = (IconAndLabel*)uNew(IconAndLabel_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
