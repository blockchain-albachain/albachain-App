// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/BottomBar.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.BottomBar.h>
#include <_root.Divider.h>
#include <_root.GoalsIcon.h>
#include <_root.HomeIcon.h>
#include <_root.IconAndLabel.h>
#include <_root.LogsIcon.h>
#include <_root.ProfileIcon.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layer.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[6];
static uType* TYPES[1];

namespace g{

// public partial sealed class BottomBar :2
// {
// static BottomBar() :4
static void BottomBar__cctor_4_fn(uType* __type)
{
}

static void BottomBar_build(uType* type)
{
    ::STRINGS[0] = uString::Const("1*, auto, 1*, auto, 1*, auto, 1*");
    ::STRINGS[1] = uString::Const("Components/BottomBar.ux");
    ::STRINGS[2] = uString::Const("HOME");
    ::STRINGS[3] = uString::Const("CONTRACT");
    ::STRINGS[4] = uString::Const("CHECK");
    ::STRINGS[5] = uString::Const("PROFILE");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
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
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)BottomBar__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* BottomBar_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Grid_typeof();
    options.FieldCount = 121;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(BottomBar);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("BottomBar", options);
    type->fp_build_ = BottomBar_build;
    type->fp_ctor_ = (void*)BottomBar__New5_fn;
    type->fp_cctor_ = BottomBar__cctor_4_fn;
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

// public BottomBar() :8
void BottomBar__ctor_8_fn(BottomBar* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :12
void BottomBar__InitializeUX_fn(BottomBar* __this)
{
    __this->InitializeUX();
}

// public BottomBar New() :8
void BottomBar__New5_fn(BottomBar** __retval)
{
    *__retval = BottomBar::New5();
}

// public BottomBar() [instance] :8
void BottomBar::ctor_8()
{
    uStackFrame __("BottomBar", ".ctor()");
    ctor_7();
    InitializeUX();
}

// private void InitializeUX() [instance] :12
void BottomBar::InitializeUX()
{
    uStackFrame __("BottomBar", "InitializeUX()");
    ::g::IconAndLabel* temp = ::g::IconAndLabel::New5();
    ::g::HomeIcon* temp1 = ::g::HomeIcon::New5();
    ::g::Divider* temp2 = ::g::Divider::New4();
    ::g::IconAndLabel* temp3 = ::g::IconAndLabel::New5();
    ::g::LogsIcon* temp4 = ::g::LogsIcon::New5();
    ::g::Divider* temp5 = ::g::Divider::New4();
    ::g::IconAndLabel* temp6 = ::g::IconAndLabel::New5();
    ::g::GoalsIcon* temp7 = ::g::GoalsIcon::New5();
    ::g::Divider* temp8 = ::g::Divider::New4();
    ::g::IconAndLabel* temp9 = ::g::IconAndLabel::New5();
    ::g::ProfileIcon* temp10 = ::g::ProfileIcon::New5();
    ::g::Fuse::Controls::Rectangle* temp11 = ::g::Fuse::Controls::Rectangle::New3();
    Columns(::STRINGS[0/*"1*, auto, 1...*/]);
    Height(::g::Uno::UX::Size__New1(56.0f, 1));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp->Text(::STRINGS[2/*"HOME"*/]);
    temp->SourceLineNumber(14);
    temp->SourceFileName(::STRINGS[1/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->SourceLineNumber(15);
    temp1->SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp2->SourceLineNumber(18);
    temp2->SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp3->Text(::STRINGS[3/*"CONTRACT"*/]);
    temp3->SourceLineNumber(20);
    temp3->SourceFileName(::STRINGS[1/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->SourceLineNumber(21);
    temp4->SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp5->SourceLineNumber(24);
    temp5->SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp6->Text(::STRINGS[4/*"CHECK"*/]);
    temp6->SourceLineNumber(26);
    temp6->SourceFileName(::STRINGS[1/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->SourceLineNumber(27);
    temp7->SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp8->SourceLineNumber(30);
    temp8->SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp9->Text(::STRINGS[5/*"PROFILE"*/]);
    temp9->SourceLineNumber(32);
    temp9->SourceFileName(::STRINGS[1/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->SourceLineNumber(33);
    temp10->SourceFileName(::STRINGS[1/*"Components/...*/]);
    temp11->Color(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    temp11->Layer(1);
    temp11->SourceLineNumber(36);
    temp11->SourceFileName(::STRINGS[1/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
}

// public BottomBar New() [static] :8
BottomBar* BottomBar::New5()
{
    BottomBar* obj1 = (BottomBar*)uNew(BottomBar_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
