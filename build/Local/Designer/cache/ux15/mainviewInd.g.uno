[Uno.Compiler.UxGenerated]
public partial class mainviewInd: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly mainviewInd __parent;
        [Uno.WeakReference] internal readonly mainviewInd __parentInstance;
        public Template(mainviewInd parent, mainviewInd parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            __self.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
            __self.Margin = float4(1.5f, 1.5f, 1.5f, 1.5f);
            __self.SourceLineNumber = 14;
            __self.SourceFileName = "Pages/individual/mainviewInd.ux";
            return __self;
        }
    }
    global::Uno.UX.Property<Fuse.Visual> nav_Active_inst;
    internal global::Fuse.Controls.Text titleText;
    internal global::Fuse.Controls.PageControl nav;
    internal global::Fuse.Controls.Page Page1;
    internal global::Fuse.Controls.Page Page2;
    internal global::Fuse.Controls.Page Page3;
    internal global::Fuse.Controls.Page Page4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "titleText",
        "nav",
        "Page1",
        "Page2",
        "Page3",
        "Page4"
    };
    static mainviewInd()
    {
    }
    [global::Uno.UX.UXConstructor]
    public mainviewInd(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        nav = new global::Fuse.Controls.PageControl();
        nav_Active_inst = new albachain_FuseControlsNavigationControl_Active_Property(nav, __selector0);
        var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new global::Fuse.iOS.StatusBarConfig();
        var temp2 = new global::Fuse.Android.StatusBarConfig();
        var temp3 = new global::Fuse.Controls.ClientPanel();
        var temp4 = new global::Fuse.Controls.Panel();
        var temp5 = new global::Fuse.Controls.Grid();
        var temp6 = new global::Fuse.Controls.Grid();
        var temp7 = new global::Fuse.Reactive.Each();
        var temp8 = new Template(this, this);
        titleText = new global::Fuse.Controls.Text();
        var temp9 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Fonts/Roboto-Black.ttf")));
        var temp10 = new global::Fuse.Controls.Image();
        var temp11 = new global::Fuse.Controls.Grid();
        var temp12 = new global::Fuse.Controls.Panel();
        var temp13 = new global::Fuse.Controls.Text();
        var temp14 = new global::Fuse.Gestures.Clicked();
        var temp15 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp16 = new global::Fuse.Controls.Panel();
        var temp17 = new global::Fuse.Controls.Text();
        var temp18 = new global::Fuse.Gestures.Clicked();
        var temp19 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp20 = new global::Fuse.Controls.Panel();
        var temp21 = new global::Fuse.Controls.Text();
        var temp22 = new global::Fuse.Gestures.Clicked();
        var temp23 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp24 = new global::Fuse.Controls.Panel();
        var temp25 = new global::Fuse.Controls.Text();
        var temp26 = new global::Fuse.Gestures.Clicked();
        var temp27 = new global::Fuse.Triggers.Actions.Set<Fuse.Visual>(nav_Active_inst);
        var temp28 = new global::Fuse.Controls.Shadow();
        var temp29 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9843137f, 0.9882353f, 0.9843137f, 1f));
        var temp30 = new global::Fuse.Controls.Panel();
        Page1 = new global::Fuse.Controls.Page();
        var temp31 = new global::home();
        Page2 = new global::Fuse.Controls.Page();
        var temp32 = new global::contract();
        Page3 = new global::Fuse.Controls.Page();
        var temp33 = new global::check();
        Page4 = new global::Fuse.Controls.Page();
        var temp34 = new global::profile();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp.LineNumber = 2;
        temp.FileName = "Pages/individual/mainviewInd.ux";
        temp.SourceLineNumber = 2;
        temp.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/individual/mainviewInd.js"));
        temp1.Style = Fuse.Platform.StatusBarStyle.Dark;
        temp1.SourceLineNumber = 3;
        temp1.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp2.Color = float4(0f, 0f, 0f, 1f);
        temp2.SourceLineNumber = 4;
        temp2.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp3.SourceLineNumber = 7;
        temp3.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp30);
        temp4.Height = new Uno.UX.Size(110f, Uno.UX.Unit.Unspecified);
        temp4.Alignment = Fuse.Elements.Alignment.Top;
        temp4.SourceLineNumber = 10;
        temp4.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp4.Background = temp29;
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp11);
        temp4.Children.Add(temp28);
        temp5.Columns = "auto,1*,auto";
        temp5.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp5.Margin = float4(5f, 5f, 5f, 5f);
        temp5.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp5.SourceLineNumber = 11;
        temp5.SourceFileName = "Pages/individual/mainviewInd.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp5, Fuse.Layouts.Dock.Top);
        temp5.Children.Add(temp6);
        temp5.Children.Add(titleText);
        temp5.Children.Add(temp10);
        temp6.RowCount = 2;
        temp6.ColumnCount = 2;
        temp6.Width = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp6.Height = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp6.Margin = float4(10f, 10f, 10f, 10f);
        temp6.SourceLineNumber = 12;
        temp6.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp6.Children.Add(temp7);
        temp7.Count = 4;
        temp7.SourceLineNumber = 13;
        temp7.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp7.Templates.Add(temp8);
        titleText.Value = "albaChain";
        titleText.FontSize = 25f;
        titleText.Color = float4(0.4588235f, 0.682353f, 0.1882353f, 1f);
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Name = __selector1;
        titleText.SourceLineNumber = 17;
        titleText.SourceFileName = "Pages/individual/mainviewInd.ux";
        titleText.Font = temp9;
        temp10.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
        temp10.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp10.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp10.Margin = float4(10f, 10f, 10f, 10f);
        temp10.SourceLineNumber = 20;
        temp10.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp10.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/search.png"));
        temp11.RowCount = 1;
        temp11.ColumnCount = 4;
        temp11.ChildOrder = Fuse.Layouts.GridChildOrder.ColumnMajor;
        temp11.Color = float4(0.9843137f, 0.9882353f, 0.9843137f, 1f);
        temp11.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp11.Alignment = Fuse.Elements.Alignment.Top;
        temp11.Margin = float4(0f, 0f, 0f, 0f);
        temp11.Padding = float4(0f, 0f, 0f, 0f);
        temp11.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp11.Opacity = 1f;
        temp11.LayoutRole = Fuse.LayoutRole.Standard;
        temp11.SourceLineNumber = 23;
        temp11.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp16);
        temp11.Children.Add(temp20);
        temp11.Children.Add(temp24);
        temp12.Alignment = Fuse.Elements.Alignment.Default;
        temp12.SourceLineNumber = 24;
        temp12.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Value = "홈";
        temp13.FontSize = 10f;
        temp13.TextColor = float4(0.5647059f, 0.5686275f, 0.5686275f, 1f);
        temp13.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp13.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp13.SourceLineNumber = 26;
        temp13.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp14.SourceLineNumber = 27;
        temp14.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp14.Actions.Add(temp15);
        temp15.Value = Page1;
        temp15.SourceLineNumber = 29;
        temp15.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp16.Alignment = Fuse.Elements.Alignment.Default;
        temp16.SourceLineNumber = 33;
        temp16.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp17.Value = "계약";
        temp17.FontSize = 10f;
        temp17.TextColor = float4(0.5921569f, 0.6f, 0.5960785f, 1f);
        temp17.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp17.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp17.SourceLineNumber = 34;
        temp17.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp18.SourceLineNumber = 35;
        temp18.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp18.Actions.Add(temp19);
        temp19.Value = Page2;
        temp19.SourceLineNumber = 37;
        temp19.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp20.Alignment = Fuse.Elements.Alignment.Default;
        temp20.SourceLineNumber = 41;
        temp20.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp22);
        temp21.Value = "관리";
        temp21.FontSize = 10f;
        temp21.TextColor = float4(0.5921569f, 0.6039216f, 0.5960785f, 1f);
        temp21.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp21.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp21.SourceLineNumber = 42;
        temp21.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp22.SourceLineNumber = 43;
        temp22.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp22.Actions.Add(temp23);
        temp23.Value = Page3;
        temp23.SourceLineNumber = 45;
        temp23.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp24.Alignment = Fuse.Elements.Alignment.Default;
        temp24.SourceLineNumber = 49;
        temp24.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp26);
        temp25.Value = "내정보";
        temp25.FontSize = 10f;
        temp25.TextColor = float4(0.5882353f, 0.6039216f, 0.5921569f, 1f);
        temp25.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp25.Y = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp25.SourceLineNumber = 50;
        temp25.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp26.SourceLineNumber = 51;
        temp26.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp26.Actions.Add(temp27);
        temp27.Value = Page4;
        temp27.SourceLineNumber = 53;
        temp27.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp28.SourceLineNumber = 57;
        temp28.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp30.Margin = float4(0f, 110f, 0f, 0f);
        temp30.SourceLineNumber = 61;
        temp30.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp30.Children.Add(nav);
        nav.Name = __selector2;
        nav.SourceLineNumber = 62;
        nav.SourceFileName = "Pages/individual/mainviewInd.ux";
        nav.Children.Add(Page1);
        nav.Children.Add(Page2);
        nav.Children.Add(Page3);
        nav.Children.Add(Page4);
        Page1.Name = __selector3;
        Page1.SourceLineNumber = 63;
        Page1.SourceFileName = "Pages/individual/mainviewInd.ux";
        Page1.Children.Add(temp31);
        temp31.SourceLineNumber = 64;
        temp31.SourceFileName = "Pages/individual/mainviewInd.ux";
        Page2.Name = __selector4;
        Page2.SourceLineNumber = 67;
        Page2.SourceFileName = "Pages/individual/mainviewInd.ux";
        Page2.Children.Add(temp32);
        temp32.SourceLineNumber = 68;
        temp32.SourceFileName = "Pages/individual/mainviewInd.ux";
        Page3.Name = __selector5;
        Page3.SourceLineNumber = 71;
        Page3.SourceFileName = "Pages/individual/mainviewInd.ux";
        Page3.Children.Add(temp33);
        temp33.SourceLineNumber = 72;
        temp33.SourceFileName = "Pages/individual/mainviewInd.ux";
        Page4.Name = __selector6;
        Page4.SourceLineNumber = 75;
        Page4.SourceFileName = "Pages/individual/mainviewInd.ux";
        Page4.Children.Add(temp34);
        temp34.SourceLineNumber = 76;
        temp34.SourceFileName = "Pages/individual/mainviewInd.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(nav);
        __g_nametable.Objects.Add(Page1);
        __g_nametable.Objects.Add(Page2);
        __g_nametable.Objects.Add(Page3);
        __g_nametable.Objects.Add(Page4);
        this.Children.Add(temp);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Active";
    static global::Uno.UX.Selector __selector1 = "titleText";
    static global::Uno.UX.Selector __selector2 = "nav";
    static global::Uno.UX.Selector __selector3 = "Page1";
    static global::Uno.UX.Selector __selector4 = "Page2";
    static global::Uno.UX.Selector __selector5 = "Page3";
    static global::Uno.UX.Selector __selector6 = "Page4";
}
