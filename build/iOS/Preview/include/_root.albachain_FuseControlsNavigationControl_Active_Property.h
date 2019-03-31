// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/albachain.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Visual.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct albachain_FuseControlsNavigationControl_Active_Property;}

namespace g{

// internal sealed class albachain_FuseControlsNavigationControl_Active_Property :30
// {
::g::Uno::UX::Property1_type* albachain_FuseControlsNavigationControl_Active_Property_typeof();
void albachain_FuseControlsNavigationControl_Active_Property__ctor_3_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name);
void albachain_FuseControlsNavigationControl_Active_Property__Get1_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval);
void albachain_FuseControlsNavigationControl_Active_Property__New1_fn(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name, albachain_FuseControlsNavigationControl_Active_Property** __retval);
void albachain_FuseControlsNavigationControl_Active_Property__get_Object_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void albachain_FuseControlsNavigationControl_Active_Property__Set1_fn(albachain_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin);

struct albachain_FuseControlsNavigationControl_Active_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::NavigationControl*> _obj;

    void ctor_3(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
    static albachain_FuseControlsNavigationControl_Active_Property* New1(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
