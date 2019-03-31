// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/albachain.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.albachain_FuseControlsNavigationControl_Active_Property.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class albachain_FuseControlsNavigationControl_Active_Property :30
// {
static void albachain_FuseControlsNavigationControl_Active_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::NavigationControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.NavigationControl*/], offsetof(albachain_FuseControlsNavigationControl_Active_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* albachain_FuseControlsNavigationControl_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(albachain_FuseControlsNavigationControl_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("albachain_FuseControlsNavigationControl_Active_Property", options);
    type->fp_build_ = albachain_FuseControlsNavigationControl_Active_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))albachain_FuseControlsNavigationControl_Active_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))albachain_FuseControlsNavigationControl_Active_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))albachain_FuseControlsNavigationControl_Active_Property__Set1_fn;
    return type;
}

// public albachain_FuseControlsNavigationControl_Active_Property(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) :33
void albachain_FuseControlsNavigationControl_Active_Property__ctor_3_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Visual Get(Uno.UX.PropertyObject obj) :35
void albachain_FuseControlsNavigationControl_Active_Property__Get1_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval)
{
    uStackFrame __("albachain_FuseControlsNavigationControl_Active_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::NavigationControl*>(obj, ::TYPES[0/*Fuse.Controls.NavigationControl*/]))->Active(), void();
}

// public albachain_FuseControlsNavigationControl_Active_Property New(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) :33
void albachain_FuseControlsNavigationControl_Active_Property__New1_fn(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name, albachain_FuseControlsNavigationControl_Active_Property** __retval)
{
    *__retval = albachain_FuseControlsNavigationControl_Active_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :34
void albachain_FuseControlsNavigationControl_Active_Property__get_Object_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Visual v, Uno.UX.IPropertyListener origin) :36
void albachain_FuseControlsNavigationControl_Active_Property__Set1_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin)
{
    uStackFrame __("albachain_FuseControlsNavigationControl_Active_Property", "Set(Uno.UX.PropertyObject,Fuse.Visual,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::NavigationControl*>(obj, ::TYPES[0/*Fuse.Controls.NavigationControl*/]))->Active(v);
}

// public albachain_FuseControlsNavigationControl_Active_Property(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) [instance] :33
void albachain_FuseControlsNavigationControl_Active_Property::ctor_3(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public albachain_FuseControlsNavigationControl_Active_Property New(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) [static] :33
albachain_FuseControlsNavigationControl_Active_Property* albachain_FuseControlsNavigationControl_Active_Property::New1(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name)
{
    albachain_FuseControlsNavigationControl_Active_Property* obj1 = (albachain_FuseControlsNavigationControl_Active_Property*)uNew(albachain_FuseControlsNavigationControl_Active_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
