[Uno.Compiler.UxGenerated]
public partial class mainviewBis: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly mainviewBis __parent;
        [Uno.WeakReference] internal readonly mainviewBis __parentInstance;
        public Template(mainviewBis parent, mainviewBis parentInstance): base(null, false)
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
            __self.SourceLineNumber = 26;
            __self.SourceFileName = "Pages/business/mainviewBis.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly mainviewBis __parent;
        [Uno.WeakReference] internal readonly mainviewBis __parentInstance;
        public Template1(mainviewBis parent, mainviewBis parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        internal global::Fuse.Controls.Rectangle gotodetailsbtn;
        internal global::Fuse.Reactive.EventBinding temp_eb20;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("storename");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("callnumber");
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp5 = new global::Fuse.Reactive.Data("storenumber");
            var temp6 = new global::Fuse.Reactive.Data("gotoDetails");
            gotodetailsbtn = new global::Fuse.Controls.Rectangle();
            var temp7 = new global::Fuse.Gestures.WhilePressed();
            var temp8 = new global::Fuse.Animations.Scale();
            var temp9 = new global::Fuse.Controls.Circle();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Controls.Text();
            var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Controls.Text();
            var temp14 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
            var temp15 = new global::Fuse.Controls.Shadow();
            temp_eb20 = new global::Fuse.Reactive.EventBinding(temp6);
            __self.SourceLineNumber = 44;
            __self.SourceFileName = "Pages/business/mainviewBis.ux";
            gotodetailsbtn.CornerRadius = float4(10f, 10f, 10f, 10f);
            gotodetailsbtn.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
            gotodetailsbtn.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            gotodetailsbtn.Height = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
            gotodetailsbtn.Alignment = Fuse.Elements.Alignment.Default;
            gotodetailsbtn.Name = __selector1;
            gotodetailsbtn.SourceLineNumber = 45;
            gotodetailsbtn.SourceFileName = "Pages/business/mainviewBis.ux";
            global::Fuse.Gestures.Clicked.AddHandler(gotodetailsbtn, temp_eb20.OnEvent);
            gotodetailsbtn.Children.Add(temp7);
            gotodetailsbtn.Children.Add(temp9);
            gotodetailsbtn.Children.Add(temp);
            gotodetailsbtn.Children.Add(temp11);
            gotodetailsbtn.Children.Add(temp1);
            gotodetailsbtn.Children.Add(temp13);
            gotodetailsbtn.Children.Add(temp2);
            gotodetailsbtn.Children.Add(temp15);
            gotodetailsbtn.Bindings.Add(temp_eb20);
            temp7.SourceLineNumber = 46;
            temp7.SourceFileName = "Pages/business/mainviewBis.ux";
            temp7.Animators.Add(temp8);
            temp8.Factor = 0.9f;
            temp8.Duration = 0.05;
            temp8.Target = gotodetailsbtn;
            temp9.Color = float4(0.8862745f, 0.8901961f, 0.8862745f, 1f);
            temp9.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
            temp9.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
            temp9.Alignment = Fuse.Elements.Alignment.Left;
            temp9.Margin = float4(20f, 0f, 0f, 0f);
            temp9.SourceLineNumber = 50;
            temp9.SourceFileName = "Pages/business/mainviewBis.ux";
            temp.FontSize = 20f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp.TextColor = float4(0f, 0f, 0f, 1f);
            temp.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
            temp.Margin = float4(140f, 20f, 0f, 0f);
            temp.Padding = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 51;
            temp.SourceFileName = "Pages/business/mainviewBis.ux";
            temp.Bindings.Add(temp10);
            temp3.SourceLineNumber = 51;
            temp3.SourceFileName = "Pages/business/mainviewBis.ux";
            temp11.Value = "전화번호";
            temp11.FontSize = 12f;
            temp11.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            temp11.Margin = float4(140f, 50f, 0f, 0f);
            temp11.SourceLineNumber = 52;
            temp11.SourceFileName = "Pages/business/mainviewBis.ux";
            temp1.FontSize = 10f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp1.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp1.Margin = float4(200f, 50f, 0f, 0f);
            temp1.SourceLineNumber = 53;
            temp1.SourceFileName = "Pages/business/mainviewBis.ux";
            temp1.Bindings.Add(temp12);
            temp4.SourceLineNumber = 53;
            temp4.SourceFileName = "Pages/business/mainviewBis.ux";
            temp13.Value = "고유번호";
            temp13.FontSize = 12f;
            temp13.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            temp13.Margin = float4(140f, 70f, 0f, 0f);
            temp13.SourceLineNumber = 54;
            temp13.SourceFileName = "Pages/business/mainviewBis.ux";
            temp2.FontSize = 10f;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp2.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp2.Margin = float4(200f, 70f, 0f, 0f);
            temp2.SourceLineNumber = 55;
            temp2.SourceFileName = "Pages/business/mainviewBis.ux";
            temp2.Bindings.Add(temp14);
            temp5.SourceLineNumber = 55;
            temp5.SourceFileName = "Pages/business/mainviewBis.ux";
            temp15.Angle = 107f;
            temp15.SourceLineNumber = 57;
            temp15.SourceFileName = "Pages/business/mainviewBis.ux";
            temp6.SourceLineNumber = 45;
            temp6.SourceFileName = "Pages/business/mainviewBis.ux";
            __self.Children.Add(gotodetailsbtn);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "gotodetailsbtn";
    }
    global::Uno.UX.Property<float4> shadow_Color_inst;
    global::Uno.UX.Property<float> sidebarFade_Opacity_inst;
    global::Uno.UX.Property<object> theEach_Items_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    internal global::Fuse.Controls.Panel sidebar;
    internal global::Fuse.Controls.Shadow shadow;
    internal global::Fuse.Controls.Rectangle sidebarFade;
    internal global::Fuse.Controls.Text titleText;
    internal global::Fuse.Reactive.Each theEach;
    internal global::Fuse.Controls.Rectangle gocontractbtn;
    internal global::Fuse.Reactive.EventBinding temp_eb21;
    internal global::Fuse.Controls.ScrollViewPager svp;
    internal global::Fuse.Reactive.EventBinding temp_eb22;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "sidebar",
        "shadow",
        "sidebarFade",
        "titleText",
        "theEach",
        "gocontractbtn",
        "temp_eb21",
        "svp",
        "temp_eb22"
    };
    static mainviewBis()
    {
    }
    [global::Uno.UX.UXConstructor]
    public mainviewBis(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        shadow = new global::Fuse.Controls.Shadow();
        shadow_Color_inst = new albachain_FuseControlsShadow_Color_Property(shadow, __selector0);
        sidebarFade = new global::Fuse.Controls.Rectangle();
        sidebarFade_Opacity_inst = new albachain_FuseElementsElement_Opacity_Property(sidebarFade, __selector1);
        theEach = new global::Fuse.Reactive.Each();
        theEach_Items_inst = new albachain_FuseReactiveEach_Items_Property(theEach, __selector2);
        var temp1 = new global::Fuse.Reactive.Data("items");
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new albachain_FuseTriggersWhileBool_Value_Property(temp, __selector3);
        var temp2 = new global::Fuse.Reactive.Data("isLoading");
        var temp3 = new global::Fuse.Reactive.Data("gocontract");
        var temp4 = new global::Fuse.Reactive.Data("loadMore");
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Controls.ClientPanel();
        var temp7 = new global::Fuse.Controls.EdgeNavigator();
        sidebar = new global::Fuse.Controls.Panel();
        var temp8 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp9 = new global::Fuse.Animations.Change<float4>(shadow_Color_inst);
        var temp10 = new global::Fuse.Animations.Change<float>(sidebarFade_Opacity_inst);
        var temp11 = new global::profile(router);
        var temp12 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9960784f, 1f, 0.9960784f, 1f));
        var temp13 = new global::Fuse.Controls.Panel();
        var temp14 = new global::Fuse.Controls.Rectangle();
        var temp15 = new global::Fuse.Controls.Grid();
        var temp16 = new global::Fuse.Controls.Grid();
        var temp17 = new global::Fuse.Reactive.Each();
        var temp18 = new Template(this, this);
        var temp19 = new global::Fuse.Gestures.Clicked();
        var temp20 = new global::Fuse.Navigation.NavigateToggle();
        var temp21 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9960784f, 1f, 0.9960784f, 1f));
        titleText = new global::Fuse.Controls.Text();
        var temp22 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Fonts/Roboto-Black.ttf")));
        var temp23 = new global::Fuse.Controls.Image();
        var temp24 = new global::maintopbar();
        var temp25 = new global::Fuse.Controls.ScrollView();
        var temp26 = new global::Fuse.Controls.StackPanel();
        var temp27 = new Template1(this, this);
        var temp28 = new global::Fuse.Reactive.DataBinding(theEach_Items_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp29 = new global::Fuse.Controls.Panel();
        var temp30 = new global::Fuse.Controls.Text();
        var temp31 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        gocontractbtn = new global::Fuse.Controls.Rectangle();
        var temp32 = new global::Fuse.Controls.Rectangle();
        var temp33 = new global::Fuse.Controls.Rectangle();
        var temp34 = new global::Fuse.Controls.Circle();
        var temp35 = new global::Fuse.Gestures.WhilePressed();
        var temp36 = new global::Fuse.Animations.Scale();
        var temp37 = new global::Fuse.Gestures.Clicked();
        var temp38 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb21 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp39 = new global::Fuse.Controls.Shadow();
        svp = new global::Fuse.Controls.ScrollViewPager();
        temp_eb22 = new global::Fuse.Reactive.EventBinding(temp4);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/business/mainviewBis.ux";
        temp5.LineNumber = 3;
        temp5.FileName = "Pages/business/mainviewBis.ux";
        temp5.SourceLineNumber = 3;
        temp5.SourceFileName = "Pages/business/mainviewBis.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/business/mainviewBis.js"));
        temp6.SourceLineNumber = 5;
        temp6.SourceFileName = "Pages/business/mainviewBis.ux";
        temp6.Children.Add(temp7);
        temp7.Alignment = Fuse.Elements.Alignment.Default;
        temp7.SourceLineNumber = 6;
        temp7.SourceFileName = "Pages/business/mainviewBis.ux";
        temp7.Children.Add(sidebar);
        temp7.Children.Add(temp13);
        sidebar.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        sidebar.Margin = float4(0f, 0f, 80f, 0f);
        sidebar.Name = __selector4;
        sidebar.SourceLineNumber = 8;
        sidebar.SourceFileName = "Pages/business/mainviewBis.ux";
        global::Fuse.Navigation.EdgeNavigation.SetEdge(sidebar, Fuse.Navigation.NavigationEdge.Left);
        sidebar.Background = temp12;
        sidebar.Children.Add(shadow);
        sidebar.Children.Add(temp8);
        sidebar.Children.Add(temp11);
        shadow.Angle = 180f;
        shadow.Distance = 8f;
        shadow.Size = 16f;
        shadow.Color = float4(0f, 0f, 0f, 0f);
        shadow.Name = __selector5;
        shadow.SourceLineNumber = 10;
        shadow.SourceFileName = "Pages/business/mainviewBis.ux";
        temp8.SourceLineNumber = 11;
        temp8.SourceFileName = "Pages/business/mainviewBis.ux";
        temp8.Animators.Add(temp9);
        temp8.Animators.Add(temp10);
        temp9.Value = float4(0f, 0f, 0f, 0.2666667f);
        temp10.Value = 1f;
        temp11.SourceLineNumber = 15;
        temp11.SourceFileName = "Pages/business/mainviewBis.ux";
        temp13.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
        temp13.SourceLineNumber = 18;
        temp13.SourceFileName = "Pages/business/mainviewBis.ux";
        temp13.Children.Add(sidebarFade);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp24);
        temp13.Children.Add(temp25);
        sidebarFade.Color = float4(0.1176471f, 0.1137255f, 0.1176471f, 0.3058824f);
        sidebarFade.HitTestMode = Fuse.Elements.HitTestMode.None;
        sidebarFade.Opacity = 0f;
        sidebarFade.Layer = Fuse.Layer.Overlay;
        sidebarFade.Name = __selector6;
        sidebarFade.SourceLineNumber = 21;
        sidebarFade.SourceFileName = "Pages/business/mainviewBis.ux";
        temp14.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp14.Alignment = Fuse.Elements.Alignment.Top;
        temp14.SourceLineNumber = 22;
        temp14.SourceFileName = "Pages/business/mainviewBis.ux";
        temp14.Children.Add(temp15);
        temp15.Columns = "auto,1*,auto";
        temp15.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp15.Margin = float4(5f, 5f, 5f, 5f);
        temp15.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp15.SourceLineNumber = 23;
        temp15.SourceFileName = "Pages/business/mainviewBis.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        temp15.Children.Add(temp16);
        temp15.Children.Add(titleText);
        temp15.Children.Add(temp23);
        temp16.RowCount = 2;
        temp16.ColumnCount = 2;
        temp16.Width = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp16.Margin = float4(0f, 10f, 10f, 10f);
        temp16.SourceLineNumber = 24;
        temp16.SourceFileName = "Pages/business/mainviewBis.ux";
        temp16.Background = temp21;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp19);
        temp17.Count = 4;
        temp17.SourceLineNumber = 25;
        temp17.SourceFileName = "Pages/business/mainviewBis.ux";
        temp17.Templates.Add(temp18);
        temp19.SourceLineNumber = 28;
        temp19.SourceFileName = "Pages/business/mainviewBis.ux";
        temp19.Actions.Add(temp20);
        temp20.SourceLineNumber = 29;
        temp20.SourceFileName = "Pages/business/mainviewBis.ux";
        temp20.Target = sidebar;
        titleText.Value = "albaChain";
        titleText.FontSize = 25f;
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Name = __selector7;
        titleText.SourceLineNumber = 32;
        titleText.SourceFileName = "Pages/business/mainviewBis.ux";
        titleText.Font = temp22;
        temp23.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
        temp23.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp23.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp23.Margin = float4(10f, 10f, 0f, 10f);
        temp23.SourceLineNumber = 35;
        temp23.SourceFileName = "Pages/business/mainviewBis.ux";
        temp23.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/search.png"));
        temp24.SourceLineNumber = 38;
        temp24.SourceFileName = "Pages/business/mainviewBis.ux";
        temp25.LayoutMode = Fuse.Controls.ScrollViewLayoutMode.PreserveVisual;
        temp25.Alignment = Fuse.Elements.Alignment.Default;
        temp25.Margin = float4(0f, 100f, 0f, 0f);
        temp25.SourceLineNumber = 41;
        temp25.SourceFileName = "Pages/business/mainviewBis.ux";
        temp25.Children.Add(temp26);
        temp25.Children.Add(svp);
        temp26.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp26.ItemSpacing = 10f;
        temp26.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp26.Margin = float4(0f, 20f, 0f, 0f);
        temp26.SourceLineNumber = 42;
        temp26.SourceFileName = "Pages/business/mainviewBis.ux";
        temp26.Children.Add(theEach);
        temp26.Children.Add(temp);
        temp26.Children.Add(gocontractbtn);
        theEach.Reuse = Fuse.Reactive.InstanceReuse.Frame;
        theEach.Name = __selector8;
        theEach.SourceLineNumber = 43;
        theEach.SourceFileName = "Pages/business/mainviewBis.ux";
        theEach.Templates.Add(temp27);
        theEach.Bindings.Add(temp28);
        temp1.SourceLineNumber = 43;
        temp1.SourceFileName = "Pages/business/mainviewBis.ux";
        temp.SourceLineNumber = 61;
        temp.SourceFileName = "Pages/business/mainviewBis.ux";
        temp.Nodes.Add(temp29);
        temp.Bindings.Add(temp31);
        temp29.Color = float4(0.9647059f, 0.9843137f, 1f, 1f);
        temp29.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp29.LayoutRole = Fuse.LayoutRole.Placeholder;
        temp29.SourceLineNumber = 62;
        temp29.SourceFileName = "Pages/business/mainviewBis.ux";
        temp29.Children.Add(temp30);
        temp30.Value = "Loading...";
        temp30.Alignment = Fuse.Elements.Alignment.Center;
        temp30.SourceLineNumber = 63;
        temp30.SourceFileName = "Pages/business/mainviewBis.ux";
        temp2.SourceLineNumber = 61;
        temp2.SourceFileName = "Pages/business/mainviewBis.ux";
        gocontractbtn.CornerRadius = float4(10f, 10f, 10f, 10f);
        gocontractbtn.Color = float4(0.9921569f, 1f, 0.9921569f, 1f);
        gocontractbtn.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        gocontractbtn.Height = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        gocontractbtn.Name = __selector9;
        gocontractbtn.SourceLineNumber = 66;
        gocontractbtn.SourceFileName = "Pages/business/mainviewBis.ux";
        gocontractbtn.Children.Add(temp32);
        gocontractbtn.Children.Add(temp33);
        gocontractbtn.Children.Add(temp34);
        gocontractbtn.Children.Add(temp35);
        gocontractbtn.Children.Add(temp37);
        gocontractbtn.Children.Add(temp39);
        temp32.Color = float4(1f, 1f, 1f, 1f);
        temp32.Width = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp32.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp32.Alignment = Fuse.Elements.Alignment.Center;
        temp32.SourceLineNumber = 67;
        temp32.SourceFileName = "Pages/business/mainviewBis.ux";
        temp33.Color = float4(1f, 1f, 1f, 1f);
        temp33.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp33.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp33.Alignment = Fuse.Elements.Alignment.Center;
        temp33.SourceLineNumber = 68;
        temp33.SourceFileName = "Pages/business/mainviewBis.ux";
        temp34.Color = float4(0.3215686f, 0.654902f, 0.7647059f, 1f);
        temp34.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp34.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp34.Alignment = Fuse.Elements.Alignment.Center;
        temp34.SourceLineNumber = 69;
        temp34.SourceFileName = "Pages/business/mainviewBis.ux";
        temp35.SourceLineNumber = 70;
        temp35.SourceFileName = "Pages/business/mainviewBis.ux";
        temp35.Animators.Add(temp36);
        temp36.Factor = 0.9f;
        temp36.Duration = 0.05;
        temp36.Target = gocontractbtn;
        temp37.SourceLineNumber = 73;
        temp37.SourceFileName = "Pages/business/mainviewBis.ux";
        temp37.Actions.Add(temp38);
        temp37.Bindings.Add(temp_eb21);
        temp38.SourceLineNumber = 74;
        temp38.SourceFileName = "Pages/business/mainviewBis.ux";
        temp38.Handler += temp_eb21.OnEvent;
        temp3.SourceLineNumber = 74;
        temp3.SourceFileName = "Pages/business/mainviewBis.ux";
        temp39.Angle = 107f;
        temp39.SourceLineNumber = 76;
        temp39.SourceFileName = "Pages/business/mainviewBis.ux";
        svp.Name = __selector10;
        svp.SourceLineNumber = 81;
        svp.SourceFileName = "Pages/business/mainviewBis.ux";
        svp.ReachedEnd += temp_eb22.OnEvent;
        svp.Each = theEach;
        svp.Bindings.Add(temp_eb22);
        temp4.SourceLineNumber = 81;
        temp4.SourceFileName = "Pages/business/mainviewBis.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(sidebar);
        __g_nametable.Objects.Add(shadow);
        __g_nametable.Objects.Add(sidebarFade);
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(theEach);
        __g_nametable.Objects.Add(gocontractbtn);
        __g_nametable.Objects.Add(temp_eb21);
        __g_nametable.Objects.Add(svp);
        __g_nametable.Objects.Add(temp_eb22);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Opacity";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "Value";
    static global::Uno.UX.Selector __selector4 = "sidebar";
    static global::Uno.UX.Selector __selector5 = "shadow";
    static global::Uno.UX.Selector __selector6 = "sidebarFade";
    static global::Uno.UX.Selector __selector7 = "titleText";
    static global::Uno.UX.Selector __selector8 = "theEach";
    static global::Uno.UX.Selector __selector9 = "gocontractbtn";
    static global::Uno.UX.Selector __selector10 = "svp";
}
