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
            __self.SourceLineNumber = 28;
            __self.SourceFileName = "Pages/individual/mainviewInd.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly mainviewInd __parent;
        [Uno.WeakReference] internal readonly mainviewInd __parentInstance;
        public Template1(mainviewInd parent, mainviewInd parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        internal global::Fuse.Controls.Rectangle gotodetailsbtn;
        internal global::Fuse.Controls.Text time;
        internal global::Fuse.Reactive.EventBinding temp_eb41;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("storeName");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp5 = new global::Fuse.Reactive.Data("workingDay");
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp6 = new global::Fuse.Reactive.Data("workingTime");
            var temp7 = new global::Fuse.Reactive.Data("pay");
            var temp8 = "원";
            var temp9 = new global::Fuse.Reactive.Constant(temp8);
            var temp3 = new global::Fuse.Controls.Text();
            temp3_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp3, __selector0);
            var temp10 = new global::Fuse.Reactive.Add(temp7, temp9);
            var temp11 = new global::Fuse.Reactive.Data("gotoDetails");
            gotodetailsbtn = new global::Fuse.Controls.Rectangle();
            var temp12 = new global::Fuse.Gestures.WhilePressed();
            var temp13 = new global::Fuse.Animations.Scale();
            var temp14 = new global::Fuse.Controls.Circle();
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp16 = new global::Fuse.Controls.Text();
            var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
            var temp18 = new global::Fuse.Controls.Text();
            var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            time = new global::Fuse.Controls.Text();
            var temp20 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
            var temp21 = new global::Fuse.Controls.Shadow();
            temp_eb41 = new global::Fuse.Reactive.EventBinding(temp11);
            __self.SourceLineNumber = 46;
            __self.SourceFileName = "Pages/individual/mainviewInd.ux";
            gotodetailsbtn.CornerRadius = float4(10f, 10f, 10f, 10f);
            gotodetailsbtn.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
            gotodetailsbtn.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            gotodetailsbtn.Height = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
            gotodetailsbtn.Alignment = Fuse.Elements.Alignment.Default;
            gotodetailsbtn.Name = __selector1;
            gotodetailsbtn.SourceLineNumber = 47;
            gotodetailsbtn.SourceFileName = "Pages/individual/mainviewInd.ux";
            global::Fuse.Gestures.Clicked.AddHandler(gotodetailsbtn, temp_eb41.OnEvent);
            gotodetailsbtn.Children.Add(temp12);
            gotodetailsbtn.Children.Add(temp14);
            gotodetailsbtn.Children.Add(temp);
            gotodetailsbtn.Children.Add(temp16);
            gotodetailsbtn.Children.Add(temp1);
            gotodetailsbtn.Children.Add(temp18);
            gotodetailsbtn.Children.Add(temp2);
            gotodetailsbtn.Children.Add(time);
            gotodetailsbtn.Children.Add(temp3);
            gotodetailsbtn.Children.Add(temp21);
            gotodetailsbtn.Bindings.Add(temp_eb41);
            temp12.SourceLineNumber = 48;
            temp12.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp12.Animators.Add(temp13);
            temp13.Factor = 0.9f;
            temp13.Duration = 0.05;
            temp13.Target = gotodetailsbtn;
            temp14.Color = float4(0.8862745f, 0.8901961f, 0.8862745f, 1f);
            temp14.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
            temp14.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
            temp14.Alignment = Fuse.Elements.Alignment.Left;
            temp14.Margin = float4(20f, 0f, 0f, 0f);
            temp14.SourceLineNumber = 52;
            temp14.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp.FontSize = 20f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp.TextColor = float4(0f, 0f, 0f, 1f);
            temp.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
            temp.Margin = float4(140f, 20f, 0f, 0f);
            temp.Padding = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 53;
            temp.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp.Bindings.Add(temp15);
            temp4.SourceLineNumber = 53;
            temp4.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp16.Value = "근무요일";
            temp16.FontSize = 12f;
            temp16.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            temp16.Margin = float4(140f, 50f, 0f, 0f);
            temp16.SourceLineNumber = 54;
            temp16.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp1.FontSize = 10f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp1.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp1.Margin = float4(200f, 50f, 0f, 0f);
            temp1.SourceLineNumber = 55;
            temp1.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp1.Bindings.Add(temp17);
            temp5.SourceLineNumber = 55;
            temp5.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp18.Value = "근무시간";
            temp18.FontSize = 12f;
            temp18.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            temp18.Margin = float4(140f, 70f, 0f, 0f);
            temp18.SourceLineNumber = 56;
            temp18.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp2.FontSize = 10f;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp2.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp2.Margin = float4(200f, 70f, 0f, 0f);
            temp2.SourceLineNumber = 57;
            temp2.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp2.Bindings.Add(temp19);
            temp6.SourceLineNumber = 57;
            temp6.SourceFileName = "Pages/individual/mainviewInd.ux";
            time.Value = "시급";
            time.FontSize = 12f;
            time.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            time.Margin = float4(140f, 90f, 0f, 0f);
            time.Name = __selector2;
            time.SourceLineNumber = 58;
            time.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp3.FontSize = 10f;
            temp3.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp3.Color = float4(0.5176471f, 0.5333334f, 0.5254902f, 1f);
            temp3.Margin = float4(200f, 90f, 0f, 0f);
            temp3.SourceLineNumber = 59;
            temp3.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp3.Bindings.Add(temp20);
            temp10.SourceLineNumber = 59;
            temp10.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp7.SourceLineNumber = 59;
            temp7.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp9.SourceLineNumber = 59;
            temp9.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp21.Angle = 107f;
            temp21.SourceLineNumber = 60;
            temp21.SourceFileName = "Pages/individual/mainviewInd.ux";
            temp11.SourceLineNumber = 47;
            temp11.SourceFileName = "Pages/individual/mainviewInd.ux";
            __self.Children.Add(gotodetailsbtn);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "gotodetailsbtn";
        static global::Uno.UX.Selector __selector2 = "time";
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
    internal global::Fuse.Reactive.EventBinding temp_eb42;
    internal global::Fuse.Controls.ScrollViewPager svp;
    internal global::Fuse.Reactive.EventBinding temp_eb43;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "sidebar",
        "shadow",
        "sidebarFade",
        "titleText",
        "theEach",
        "gocontractbtn",
        "temp_eb42",
        "svp",
        "temp_eb43"
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
        var temp6 = new global::Fuse.iOS.StatusBarConfig();
        var temp7 = new global::Fuse.Android.StatusBarConfig();
        var temp8 = new global::Fuse.Controls.ClientPanel();
        var temp9 = new global::Fuse.Controls.EdgeNavigator();
        sidebar = new global::Fuse.Controls.Panel();
        var temp10 = new global::Fuse.Navigation.ActivatingAnimation();
        var temp11 = new global::Fuse.Animations.Change<float4>(shadow_Color_inst);
        var temp12 = new global::Fuse.Animations.Change<float>(sidebarFade_Opacity_inst);
        var temp13 = new global::profileInd(router);
        var temp14 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9960784f, 1f, 0.9960784f, 1f));
        var temp15 = new global::Fuse.Controls.Panel();
        var temp16 = new global::Fuse.Controls.Rectangle();
        var temp17 = new global::Fuse.Controls.Grid();
        var temp18 = new global::Fuse.Controls.Grid();
        var temp19 = new global::Fuse.Reactive.Each();
        var temp20 = new Template(this, this);
        var temp21 = new global::Fuse.Gestures.Clicked();
        var temp22 = new global::Fuse.Navigation.NavigateToggle();
        var temp23 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9960784f, 1f, 0.9960784f, 1f));
        titleText = new global::Fuse.Controls.Text();
        var temp24 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../Assets/Fonts/Roboto-Black.ttf")));
        var temp25 = new global::Fuse.Controls.Image();
        var temp26 = new global::Fuse.Controls.ScrollView();
        var temp27 = new global::Fuse.Controls.StackPanel();
        var temp28 = new Template1(this, this);
        var temp29 = new global::Fuse.Reactive.DataBinding(theEach_Items_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp30 = new global::Fuse.Controls.Panel();
        var temp31 = new global::Fuse.Controls.Text();
        var temp32 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        gocontractbtn = new global::Fuse.Controls.Rectangle();
        var temp33 = new global::Fuse.Controls.Rectangle();
        var temp34 = new global::Fuse.Controls.Rectangle();
        var temp35 = new global::Fuse.Controls.Circle();
        var temp36 = new global::Fuse.Gestures.WhilePressed();
        var temp37 = new global::Fuse.Animations.Scale();
        var temp38 = new global::Fuse.Gestures.Clicked();
        var temp39 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb42 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp40 = new global::Fuse.Controls.Shadow();
        svp = new global::Fuse.Controls.ScrollViewPager();
        temp_eb43 = new global::Fuse.Reactive.EventBinding(temp4);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp5.LineNumber = 2;
        temp5.FileName = "Pages/individual/mainviewInd.ux";
        temp5.SourceLineNumber = 2;
        temp5.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/individual/mainviewInd.js"));
        temp6.Style = Fuse.Platform.StatusBarStyle.Dark;
        temp6.SourceLineNumber = 3;
        temp6.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp7.Color = float4(0f, 0f, 0f, 1f);
        temp7.SourceLineNumber = 4;
        temp7.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp8.SourceLineNumber = 7;
        temp8.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp8.Children.Add(temp9);
        temp9.Alignment = Fuse.Elements.Alignment.Default;
        temp9.SourceLineNumber = 9;
        temp9.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp9.Children.Add(sidebar);
        temp9.Children.Add(temp15);
        sidebar.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        sidebar.Margin = float4(0f, 0f, 80f, 0f);
        sidebar.Name = __selector4;
        sidebar.SourceLineNumber = 11;
        sidebar.SourceFileName = "Pages/individual/mainviewInd.ux";
        global::Fuse.Navigation.EdgeNavigation.SetEdge(sidebar, Fuse.Navigation.NavigationEdge.Left);
        sidebar.Background = temp14;
        sidebar.Children.Add(shadow);
        sidebar.Children.Add(temp10);
        sidebar.Children.Add(temp13);
        shadow.Angle = 180f;
        shadow.Distance = 8f;
        shadow.Size = 16f;
        shadow.Color = float4(0f, 0f, 0f, 0f);
        shadow.Name = __selector5;
        shadow.SourceLineNumber = 13;
        shadow.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp10.SourceLineNumber = 14;
        temp10.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp10.Animators.Add(temp11);
        temp10.Animators.Add(temp12);
        temp11.Value = float4(0f, 0f, 0f, 0.2666667f);
        temp12.Value = 1f;
        temp13.SourceLineNumber = 18;
        temp13.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp15.SourceLineNumber = 21;
        temp15.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp15.Children.Add(sidebarFade);
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp26);
        sidebarFade.Color = float4(0.1176471f, 0.1137255f, 0.1176471f, 0.3058824f);
        sidebarFade.HitTestMode = Fuse.Elements.HitTestMode.None;
        sidebarFade.Opacity = 0f;
        sidebarFade.Layer = Fuse.Layer.Overlay;
        sidebarFade.Name = __selector6;
        sidebarFade.SourceLineNumber = 22;
        sidebarFade.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp16.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
        temp16.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp16.Alignment = Fuse.Elements.Alignment.Top;
        temp16.SourceLineNumber = 24;
        temp16.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp16.Children.Add(temp17);
        temp17.Columns = "auto,1*,auto";
        temp17.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp17.Margin = float4(5f, 5f, 5f, 5f);
        temp17.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp17.SourceLineNumber = 25;
        temp17.SourceFileName = "Pages/individual/mainviewInd.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Top);
        temp17.Children.Add(temp18);
        temp17.Children.Add(titleText);
        temp17.Children.Add(temp25);
        temp18.RowCount = 2;
        temp18.ColumnCount = 2;
        temp18.Width = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp18.Margin = float4(0f, 10f, 10f, 10f);
        temp18.SourceLineNumber = 26;
        temp18.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp18.Background = temp23;
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp21);
        temp19.Count = 4;
        temp19.SourceLineNumber = 27;
        temp19.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp19.Templates.Add(temp20);
        temp21.SourceLineNumber = 30;
        temp21.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp21.Actions.Add(temp22);
        temp22.SourceLineNumber = 31;
        temp22.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp22.Target = sidebar;
        titleText.Value = "albaChain";
        titleText.FontSize = 25f;
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Name = __selector7;
        titleText.SourceLineNumber = 34;
        titleText.SourceFileName = "Pages/individual/mainviewInd.ux";
        titleText.Font = temp24;
        temp25.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
        temp25.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp25.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp25.Margin = float4(10f, 10f, 0f, 10f);
        temp25.SourceLineNumber = 37;
        temp25.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp25.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/search.png"));
        temp26.LayoutMode = Fuse.Controls.ScrollViewLayoutMode.PreserveVisual;
        temp26.Alignment = Fuse.Elements.Alignment.Default;
        temp26.Margin = float4(0f, 100f, 0f, 0f);
        temp26.SourceLineNumber = 43;
        temp26.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp26.Children.Add(temp27);
        temp26.Children.Add(svp);
        temp27.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp27.ItemSpacing = 10f;
        temp27.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp27.Margin = float4(0f, 20f, 0f, 0f);
        temp27.SourceLineNumber = 44;
        temp27.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp27.Children.Add(theEach);
        temp27.Children.Add(temp);
        temp27.Children.Add(gocontractbtn);
        theEach.Reuse = Fuse.Reactive.InstanceReuse.Frame;
        theEach.Name = __selector8;
        theEach.SourceLineNumber = 45;
        theEach.SourceFileName = "Pages/individual/mainviewInd.ux";
        theEach.Templates.Add(temp28);
        theEach.Bindings.Add(temp29);
        temp1.SourceLineNumber = 45;
        temp1.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp.SourceLineNumber = 65;
        temp.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp.Nodes.Add(temp30);
        temp.Bindings.Add(temp32);
        temp30.Color = float4(0.9647059f, 0.9843137f, 1f, 1f);
        temp30.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp30.LayoutRole = Fuse.LayoutRole.Placeholder;
        temp30.SourceLineNumber = 66;
        temp30.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp30.Children.Add(temp31);
        temp31.Value = "Loading...";
        temp31.Alignment = Fuse.Elements.Alignment.Center;
        temp31.SourceLineNumber = 68;
        temp31.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp2.SourceLineNumber = 65;
        temp2.SourceFileName = "Pages/individual/mainviewInd.ux";
        gocontractbtn.CornerRadius = float4(10f, 10f, 10f, 10f);
        gocontractbtn.Color = float4(0.9921569f, 1f, 0.9921569f, 1f);
        gocontractbtn.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        gocontractbtn.Height = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        gocontractbtn.Name = __selector9;
        gocontractbtn.SourceLineNumber = 71;
        gocontractbtn.SourceFileName = "Pages/individual/mainviewInd.ux";
        gocontractbtn.Children.Add(temp33);
        gocontractbtn.Children.Add(temp34);
        gocontractbtn.Children.Add(temp35);
        gocontractbtn.Children.Add(temp36);
        gocontractbtn.Children.Add(temp38);
        gocontractbtn.Children.Add(temp40);
        temp33.Color = float4(1f, 1f, 1f, 1f);
        temp33.Width = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp33.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp33.Alignment = Fuse.Elements.Alignment.Center;
        temp33.SourceLineNumber = 72;
        temp33.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp34.Color = float4(1f, 1f, 1f, 1f);
        temp34.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp34.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
        temp34.Alignment = Fuse.Elements.Alignment.Center;
        temp34.SourceLineNumber = 73;
        temp34.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp35.Color = float4(0.3215686f, 0.654902f, 0.7647059f, 1f);
        temp35.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp35.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp35.Alignment = Fuse.Elements.Alignment.Center;
        temp35.SourceLineNumber = 74;
        temp35.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp36.SourceLineNumber = 75;
        temp36.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp36.Animators.Add(temp37);
        temp37.Factor = 0.9f;
        temp37.Duration = 0.05;
        temp37.Target = gocontractbtn;
        temp38.SourceLineNumber = 78;
        temp38.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp38.Actions.Add(temp39);
        temp38.Bindings.Add(temp_eb42);
        temp39.SourceLineNumber = 79;
        temp39.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp39.Handler += temp_eb42.OnEvent;
        temp3.SourceLineNumber = 79;
        temp3.SourceFileName = "Pages/individual/mainviewInd.ux";
        temp40.Angle = 107f;
        temp40.SourceLineNumber = 81;
        temp40.SourceFileName = "Pages/individual/mainviewInd.ux";
        svp.Name = __selector10;
        svp.SourceLineNumber = 85;
        svp.SourceFileName = "Pages/individual/mainviewInd.ux";
        svp.ReachedEnd += temp_eb43.OnEvent;
        svp.Each = theEach;
        svp.Bindings.Add(temp_eb43);
        temp4.SourceLineNumber = 85;
        temp4.SourceFileName = "Pages/individual/mainviewInd.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(sidebar);
        __g_nametable.Objects.Add(shadow);
        __g_nametable.Objects.Add(sidebarFade);
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(theEach);
        __g_nametable.Objects.Add(gocontractbtn);
        __g_nametable.Objects.Add(temp_eb42);
        __g_nametable.Objects.Add(svp);
        __g_nametable.Objects.Add(temp_eb43);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
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
