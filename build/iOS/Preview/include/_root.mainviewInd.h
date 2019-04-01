// This file was generated based on /Users/kbs/development/albachain-App/build/iOS/Preview/cache/ux15/mainviewInd.g.uno.
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
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Animations{struct Attractor;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct mainviewInd;}
namespace g{struct TabHeader;}
namespace g{struct TabIcon;}

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
    uStrong< ::g::Uno::UX::Property1*> nav_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> bgColor_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> titleText_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> shrinkIndicatorWidth_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> indicatorColorAttractor_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> bgColorAttractor_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> titleTextAttractor_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> h1_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> col1_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> c1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> h2_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> col2_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> c2_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> h3_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> col3_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> c3_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> h4_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> col4_Width_inst;
    uStrong< ::g::Uno::UX::Property1*> c4_Color_inst;
    uStrong< ::g::Fuse::Controls::Text*> titleText;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    uStrong< ::g::Fuse::Controls::Panel*> p1;
    uStrong< ::g::Fuse::Controls::Panel*> p4;
    uStrong< ::g::Fuse::Layouts::Column*> col1;
    uStrong< ::g::Fuse::Layouts::Column*> col2;
    uStrong< ::g::Fuse::Layouts::Column*> col3;
    uStrong< ::g::Fuse::Layouts::Column*> col4;
    uStrong< ::g::TabIcon*> c1;
    uStrong< ::g::TabHeader*> h1;
    uStrong< ::g::TabIcon*> c2;
    uStrong< ::g::TabHeader*> h2;
    uStrong< ::g::TabIcon*> c3;
    uStrong< ::g::TabHeader*> h3;
    uStrong< ::g::TabIcon*> c4;
    uStrong< ::g::TabHeader*> h4;
    uStrong< ::g::Fuse::Controls::PageControl*> nav;
    uStrong< ::g::Fuse::Animations::Attractor*> indicatorColorAttractor;
    uStrong< ::g::Fuse::Controls::Rectangle*> bgColor;
    uStrong< ::g::Fuse::Animations::Attractor*> bgColorAttractor;
    uStrong< ::g::Fuse::Animations::Attractor*> titleTextAttractor;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> shrinkIndicatorWidth;
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::Controls::Page*> page4;
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
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return mainviewInd_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return mainviewInd_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return mainviewInd_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return mainviewInd_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return mainviewInd_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return mainviewInd_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return mainviewInd_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return mainviewInd_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return mainviewInd_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return mainviewInd_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return mainviewInd_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return mainviewInd_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return mainviewInd_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return mainviewInd_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return mainviewInd_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return mainviewInd_typeof()->Init(), __selector26_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static mainviewInd* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
