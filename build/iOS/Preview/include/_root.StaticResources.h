// This file was generated based on /Users/jaeyounchae/Desktop/albachain-App/build/iOS/Preview/cache/ux15/StaticResources.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{struct StaticResources;}

namespace g{

// public partial sealed class StaticResources :2
// {
::g::Fuse::Controls::Panel_type* StaticResources_typeof();
void StaticResources__ctor_7_fn(StaticResources* __this);
void StaticResources__InitializeUX_fn(StaticResources* __this);
void StaticResources__New4_fn(StaticResources** __retval);

struct StaticResources : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::Float4 BorderColor_;
    static ::g::Uno::Float4& BorderColor() { return StaticResources_typeof()->Init(), BorderColor_; }
    static uSStrong< ::g::Fuse::Font*> BaseFont_;
    static uSStrong< ::g::Fuse::Font*>& BaseFont() { return StaticResources_typeof()->Init(), BaseFont_; }
    static uSStrong< ::g::Fuse::Font*> BoldFont_;
    static uSStrong< ::g::Fuse::Font*>& BoldFont() { return StaticResources_typeof()->Init(), BoldFont_; }

    void ctor_7();
    void InitializeUX();
    static StaticResources* New4();
};
// }

} // ::g
