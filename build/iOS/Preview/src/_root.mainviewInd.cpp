// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/mainviewInd.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_bundle.h>
#include <_root.BottomBar.h>
#include <_root.contract.h>
#include <_root.home.h>
#include <_root.mainviewInd.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Navigator.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{

// public partial sealed class mainviewInd :2
// {
// static mainviewInd() :13
static void mainviewInd__cctor_4_fn(uType* __type)
{
    mainviewInd::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"home"*/], ::STRINGS[2/*"contract"*/]);
    mainviewInd::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"home"*/]);
    mainviewInd::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"contract"*/]);
}

static void mainviewInd_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("home");
    ::STRINGS[2] = uString::Const("contract");
    ::STRINGS[3] = uString::Const("Pages/individual/mainviewInd.ux");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::albachain_bundle_typeof());
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
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(mainviewInd, router), 0,
        ::g::home_typeof(), offsetof(mainviewInd, home), 0,
        ::g::contract_typeof(), offsetof(mainviewInd, contract), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(mainviewInd, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&mainviewInd::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&mainviewInd::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)mainviewInd__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* mainviewInd_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
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

// public mainviewInd(Fuse.Navigation.Router router) :17
void mainviewInd__ctor_8_fn(mainviewInd* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :23
void mainviewInd__InitializeUX_fn(mainviewInd* __this)
{
    __this->InitializeUX();
}

// public mainviewInd New(Fuse.Navigation.Router router) :17
void mainviewInd__New5_fn(::g::Fuse::Navigation::Router* router1, mainviewInd** __retval)
{
    *__retval = mainviewInd::New5(router1);
}

uSStrong<uArray*> mainviewInd::__g_static_nametable1_;
::g::Uno::UX::Selector mainviewInd::__selector0_;
::g::Uno::UX::Selector mainviewInd::__selector1_;

// public mainviewInd(Fuse.Navigation.Router router) [instance] :17
void mainviewInd::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("mainviewInd", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :23
void mainviewInd::InitializeUX()
{
    uStackFrame __("mainviewInd", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, mainviewInd::__g_static_nametable1_);
    ::g::Fuse::iOS::StatusBarConfig* temp = ::g::Fuse::iOS::StatusBarConfig::New2();
    ::g::Fuse::Android::StatusBarConfig* temp1 = ::g::Fuse::Android::StatusBarConfig::New2();
    ::g::Fuse::Reactive::JavaScript* temp2 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp3 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Navigator* temp4 = ::g::Fuse::Controls::Navigator::New4();
    home = ::g::home::New5(router);
    contract = ::g::contract::New5(router);
    ::g::BottomBar* temp5 = ::g::BottomBar::New5();
    ::g::Fuse::Controls::BottomBarBackground* temp6 = ::g::Fuse::Controls::BottomBarBackground::New3();
    SourceLineNumber(1);
    SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    temp->Style(0);
    temp->SourceLineNumber(2);
    temp->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    temp1->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->SourceLineNumber(3);
    temp1->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    temp2->LineNumber(6);
    temp2->FileName(::STRINGS[3/*"Pages/indiv...*/]);
    temp2->SourceLineNumber(6);
    temp2->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::albachain_bundle::mainviewInd18fc5dce()));
    temp3->SourceLineNumber(8);
    temp3->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp4->DefaultPath(::STRINGS[1/*"home"*/]);
    temp4->SourceLineNumber(9);
    temp4->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), home);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), contract);
    uPtr(home)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(home)->Name(mainviewInd::__selector0_);
    uPtr(home)->SourceLineNumber(10);
    uPtr(home)->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    uPtr(contract)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(contract)->Name(mainviewInd::__selector1_);
    uPtr(contract)->SourceLineNumber(11);
    uPtr(contract)->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    temp5->SourceLineNumber(14);
    temp5->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp5, 3);
    temp6->SourceLineNumber(15);
    temp6->SourceFileName(::STRINGS[3/*"Pages/indiv...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 3);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), home);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), contract);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
}

// public mainviewInd New(Fuse.Navigation.Router router) [static] :17
mainviewInd* mainviewInd::New5(::g::Fuse::Navigation::Router* router1)
{
    mainviewInd* obj1 = (mainviewInd*)uNew(mainviewInd_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
