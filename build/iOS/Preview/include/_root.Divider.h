// This file was generated based on /Users/kbs/development/albachain/build/iOS/Preview/cache/ux15/Divider.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
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
namespace g{struct Divider;}

namespace g{

// public partial sealed class Divider :2
// {
::g::Fuse::Controls::Shape_type* Divider_typeof();
void Divider__ctor_8_fn(Divider* __this);
void Divider__InitializeUX_fn(Divider* __this);
void Divider__New4_fn(Divider** __retval);

struct Divider : ::g::Fuse::Controls::Rectangle
{
    void ctor_8();
    void InitializeUX();
    static Divider* New4();
};
// }

} // ::g
