// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/mainviewInd.g.uno.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollViewPager;}}}
namespace g{namespace Fuse{namespace Controls{struct Shadow;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct Each;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct mainviewInd;}

namespace g{

// public partial sealed class mainviewInd :2
// {
::g::Fuse::Controls::Panel_type* mainviewInd_typeof();
void mainviewInd__ctor_8_fn(mainviewInd* __this, ::g::Fuse::Navigation::Router* router1);
void mainviewInd__InitializeUX_fn(mainviewInd* __this);
void mainviewInd__New5_fn(::g::Fuse::Navigation::Router* router1, mainviewInd** __retval);

struct mainviewInd : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> shadow_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> sidebarFade_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> theEach_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Fuse::Controls::Panel*> sidebar;
    uStrong< ::g::Fuse::Controls::Shadow*> shadow;
    uStrong< ::g::Fuse::Controls::Rectangle*> sidebarFade;
    uStrong< ::g::Fuse::Controls::Text*> titleText;
    uStrong< ::g::Fuse::Reactive::Each*> theEach;
    uStrong< ::g::Fuse::Controls::Rectangle*> gocontractbtn;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb42;
    uStrong< ::g::Fuse::Controls::ScrollViewPager*> svp;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb43;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return mainviewInd_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return mainviewInd_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return mainviewInd_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return mainviewInd_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return mainviewInd_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return mainviewInd_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return mainviewInd_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return mainviewInd_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return mainviewInd_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return mainviewInd_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return mainviewInd_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return mainviewInd_typeof()->Init(), __selector10_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static mainviewInd* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
