// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/login.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct login;}

namespace g{

// public partial sealed class login :2
// {
::g::Fuse::Controls::Panel_type* login_typeof();
void login__ctor_8_fn(login* __this, ::g::Fuse::Navigation::Router* router1);
void login__InitializeUX_fn(login* __this);
void login__New5_fn(::g::Fuse::Navigation::Router* router1, login** __retval);

struct login : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> navigation_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Element_LayoutMaster_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    static uSStrong< ::g::Fuse::Font*> RobotoMedium_;
    static uSStrong< ::g::Fuse::Font*>& RobotoMedium() { return login_typeof()->Init(), RobotoMedium_; }
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    uStrong< ::g::Fuse::Controls::Panel*> page1Tab;
    uStrong< ::g::Fuse::Controls::Panel*> page2Tab;
    uStrong< ::g::Fuse::Controls::PageControl*> navigation;
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Controls::Grid*> loginArea1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb1;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Grid*> loginArea2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return login_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return login_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return login_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return login_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return login_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return login_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return login_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return login_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return login_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return login_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return login_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return login_typeof()->Init(), __selector10_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static login* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
