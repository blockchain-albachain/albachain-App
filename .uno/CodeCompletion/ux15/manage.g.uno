[Uno.Compiler.UxGenerated]
public partial class manage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly manage __parent;
        [Uno.WeakReference] internal readonly manage __parentInstance;
        public Template(manage parent, manage parentInstance): base(null, false)
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
            __self.SourceLineNumber = 27;
            __self.SourceFileName = "Pages/business/manage.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly manage __parent;
        [Uno.WeakReference] internal readonly manage __parentInstance;
        public Template1(manage parent, manage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        internal global::Fuse.Controls.Rectangle gotodetailsbtn;
        internal global::Fuse.Controls.Text time;
        internal global::Fuse.Reactive.EventBinding temp_eb21;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("name");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("content");
            var temp5 = new global::Fuse.Reactive.Data("expense");
            var temp6 = "원";
            var temp7 = new global::Fuse.Reactive.Constant(temp6);
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp8 = new global::Fuse.Reactive.Add(temp5, temp7);
            var temp9 = new global::Fuse.Reactive.Data("gotoDetails");
            gotodetailsbtn = new global::Fuse.Controls.Rectangle();
            var temp10 = new global::Fuse.Gestures.WhilePressed();
            var temp11 = new global::Fuse.Animations.Scale();
            var temp12 = new global::Fuse.Controls.Circle();
            var temp13 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            var temp14 = new global::Fuse.Controls.Text();
            var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp16 = new global::Fuse.Controls.Text();
            var temp17 = new global::Fuse.Controls.Text();
            time = new global::Fuse.Controls.Text();
            var temp18 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
            var temp19 = new global::Fuse.Controls.Shadow();
            temp_eb21 = new global::Fuse.Reactive.EventBinding(temp9);
            __self.SourceLineNumber = 48;
            __self.SourceFileName = "Pages/business/manage.ux";
            gotodetailsbtn.CornerRadius = float4(10f, 10f, 10f, 10f);
            gotodetailsbtn.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
            gotodetailsbtn.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
            gotodetailsbtn.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
            gotodetailsbtn.Alignment = Fuse.Elements.Alignment.Default;
            gotodetailsbtn.Name = __selector1;
            gotodetailsbtn.SourceLineNumber = 49;
            gotodetailsbtn.SourceFileName = "Pages/business/manage.ux";
            global::Fuse.Gestures.Clicked.AddHandler(gotodetailsbtn, temp_eb21.OnEvent);
            gotodetailsbtn.Children.Add(temp10);
            gotodetailsbtn.Children.Add(temp12);
            gotodetailsbtn.Children.Add(temp);
            gotodetailsbtn.Children.Add(temp14);
            gotodetailsbtn.Children.Add(temp1);
            gotodetailsbtn.Children.Add(temp16);
            gotodetailsbtn.Children.Add(temp17);
            gotodetailsbtn.Children.Add(time);
            gotodetailsbtn.Children.Add(temp2);
            gotodetailsbtn.Children.Add(temp19);
            gotodetailsbtn.Bindings.Add(temp_eb21);
            temp10.SourceLineNumber = 50;
            temp10.SourceFileName = "Pages/business/manage.ux";
            temp10.Animators.Add(temp11);
            temp11.Factor = 0.9f;
            temp11.Duration = 0.05;
            temp11.Target = gotodetailsbtn;
            temp12.Color = float4(0.8862745f, 0.8901961f, 0.8862745f, 1f);
            temp12.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp12.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
            temp12.Alignment = Fuse.Elements.Alignment.Left;
            temp12.Margin = float4(20f, 0f, 0f, 0f);
            temp12.SourceLineNumber = 54;
            temp12.SourceFileName = "Pages/business/manage.ux";
            temp.FontSize = 20f;
            temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp.TextColor = float4(0f, 0f, 0f, 1f);
            temp.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Margin = float4(0f, 0f, 70f, 0f);
            temp.Padding = float4(0f, 0f, 0f, 0f);
            temp.SourceLineNumber = 55;
            temp.SourceFileName = "Pages/business/manage.ux";
            temp.Bindings.Add(temp13);
            temp3.SourceLineNumber = 55;
            temp3.SourceFileName = "Pages/business/manage.ux";
            temp14.Value = "희망 요일";
            temp14.FontSize = 10f;
            temp14.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            temp14.Alignment = Fuse.Elements.Alignment.TopCenter;
            temp14.Margin = float4(50f, 15f, 0f, 0f);
            temp14.SourceLineNumber = 56;
            temp14.SourceFileName = "Pages/business/manage.ux";
            temp1.FontSize = 10f;
            temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp1.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp1.Alignment = Fuse.Elements.Alignment.TopCenter;
            temp1.Margin = float4(200f, 15f, 0f, 0f);
            temp1.SourceLineNumber = 57;
            temp1.SourceFileName = "Pages/business/manage.ux";
            temp1.Bindings.Add(temp15);
            temp4.SourceLineNumber = 57;
            temp4.SourceFileName = "Pages/business/manage.ux";
            temp16.Value = "희망 시간";
            temp16.FontSize = 10f;
            temp16.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            temp16.Alignment = Fuse.Elements.Alignment.TopCenter;
            temp16.Margin = float4(50f, 35f, 0f, 0f);
            temp16.SourceLineNumber = 58;
            temp16.SourceFileName = "Pages/business/manage.ux";
            temp17.Value = "PM 8:00 ~ AM 3:00";
            temp17.FontSize = 10f;
            temp17.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp17.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp17.Alignment = Fuse.Elements.Alignment.TopCenter;
            temp17.Margin = float4(200f, 35f, 0f, 0f);
            temp17.SourceLineNumber = 59;
            temp17.SourceFileName = "Pages/business/manage.ux";
            time.Value = "희망 시급";
            time.FontSize = 10f;
            time.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
            time.Alignment = Fuse.Elements.Alignment.TopCenter;
            time.Margin = float4(50f, 55f, 0f, 0f);
            time.Name = __selector2;
            time.SourceLineNumber = 60;
            time.SourceFileName = "Pages/business/manage.ux";
            temp2.FontSize = 10f;
            temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
            temp2.Color = float4(0.5176471f, 0.5333334f, 0.5254902f, 1f);
            temp2.Alignment = Fuse.Elements.Alignment.TopCenter;
            temp2.Margin = float4(200f, 55f, 0f, 0f);
            temp2.SourceLineNumber = 61;
            temp2.SourceFileName = "Pages/business/manage.ux";
            temp2.Bindings.Add(temp18);
            temp8.SourceLineNumber = 61;
            temp8.SourceFileName = "Pages/business/manage.ux";
            temp5.SourceLineNumber = 61;
            temp5.SourceFileName = "Pages/business/manage.ux";
            temp7.SourceLineNumber = 61;
            temp7.SourceFileName = "Pages/business/manage.ux";
            temp19.Angle = 107f;
            temp19.SourceLineNumber = 62;
            temp19.SourceFileName = "Pages/business/manage.ux";
            temp9.SourceLineNumber = 49;
            temp9.SourceFileName = "Pages/business/manage.ux";
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
        "svp",
        "temp_eb22"
    };
    static manage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public manage(
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
        var temp3 = new global::Fuse.Reactive.Data("loadMore");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
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
        var temp22 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../Assets/Fonts/Roboto-Black.ttf")));
        var temp23 = new global::Fuse.Controls.Image();
        var temp24 = new global::maintopbar();
        var temp25 = new global::Fuse.Controls.Rectangle();
        var temp26 = new global::Fuse.Controls.Text();
        var temp27 = new global::Fuse.Controls.ScrollView();
        var temp28 = new global::Fuse.Controls.StackPanel();
        var temp29 = new Template1(this, this);
        var temp30 = new global::Fuse.Reactive.DataBinding(theEach_Items_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp31 = new global::Fuse.Controls.Panel();
        var temp32 = new global::Fuse.Controls.Text();
        var temp33 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        svp = new global::Fuse.Controls.ScrollViewPager();
        temp_eb22 = new global::Fuse.Reactive.EventBinding(temp3);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/business/manage.ux";
        temp4.LineNumber = 3;
        temp4.FileName = "Pages/business/manage.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Pages/business/manage.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/business/manage.js"));
        temp5.LineNumber = 4;
        temp5.FileName = "Pages/business/manage.ux";
        temp5.SourceLineNumber = 4;
        temp5.SourceFileName = "Pages/business/manage.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/business/mainviewBis.js"));
        temp6.SourceLineNumber = 6;
        temp6.SourceFileName = "Pages/business/manage.ux";
        temp6.Children.Add(temp7);
        temp7.Alignment = Fuse.Elements.Alignment.Default;
        temp7.SourceLineNumber = 7;
        temp7.SourceFileName = "Pages/business/manage.ux";
        temp7.Children.Add(sidebar);
        temp7.Children.Add(temp13);
        sidebar.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        sidebar.Margin = float4(0f, 0f, 80f, 0f);
        sidebar.Name = __selector4;
        sidebar.SourceLineNumber = 9;
        sidebar.SourceFileName = "Pages/business/manage.ux";
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
        shadow.SourceLineNumber = 11;
        shadow.SourceFileName = "Pages/business/manage.ux";
        temp8.SourceLineNumber = 12;
        temp8.SourceFileName = "Pages/business/manage.ux";
        temp8.Animators.Add(temp9);
        temp8.Animators.Add(temp10);
        temp9.Value = float4(0f, 0f, 0f, 0.2666667f);
        temp10.Value = 1f;
        temp11.SourceLineNumber = 16;
        temp11.SourceFileName = "Pages/business/manage.ux";
        temp13.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
        temp13.SourceLineNumber = 19;
        temp13.SourceFileName = "Pages/business/manage.ux";
        temp13.Children.Add(sidebarFade);
        temp13.Children.Add(temp14);
        temp13.Children.Add(temp24);
        temp13.Children.Add(temp25);
        temp13.Children.Add(temp27);
        sidebarFade.Color = float4(0.1176471f, 0.1137255f, 0.1176471f, 0.3058824f);
        sidebarFade.HitTestMode = Fuse.Elements.HitTestMode.None;
        sidebarFade.Opacity = 0f;
        sidebarFade.Layer = Fuse.Layer.Overlay;
        sidebarFade.Name = __selector6;
        sidebarFade.SourceLineNumber = 22;
        sidebarFade.SourceFileName = "Pages/business/manage.ux";
        temp14.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp14.Alignment = Fuse.Elements.Alignment.Top;
        temp14.SourceLineNumber = 23;
        temp14.SourceFileName = "Pages/business/manage.ux";
        temp14.Children.Add(temp15);
        temp15.Columns = "auto,1*,auto";
        temp15.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp15.Margin = float4(5f, 5f, 5f, 5f);
        temp15.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp15.SourceLineNumber = 24;
        temp15.SourceFileName = "Pages/business/manage.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp15, Fuse.Layouts.Dock.Top);
        temp15.Children.Add(temp16);
        temp15.Children.Add(titleText);
        temp15.Children.Add(temp23);
        temp16.RowCount = 2;
        temp16.ColumnCount = 2;
        temp16.Width = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(22f, Uno.UX.Unit.Unspecified);
        temp16.Margin = float4(0f, 10f, 10f, 10f);
        temp16.SourceLineNumber = 25;
        temp16.SourceFileName = "Pages/business/manage.ux";
        temp16.Background = temp21;
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp19);
        temp17.Count = 4;
        temp17.SourceLineNumber = 26;
        temp17.SourceFileName = "Pages/business/manage.ux";
        temp17.Templates.Add(temp18);
        temp19.SourceLineNumber = 29;
        temp19.SourceFileName = "Pages/business/manage.ux";
        temp19.Actions.Add(temp20);
        temp20.SourceLineNumber = 30;
        temp20.SourceFileName = "Pages/business/manage.ux";
        temp20.Target = sidebar;
        titleText.Value = "albaChain";
        titleText.FontSize = 25f;
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Name = __selector7;
        titleText.SourceLineNumber = 33;
        titleText.SourceFileName = "Pages/business/manage.ux";
        titleText.Font = temp22;
        temp23.Color = float4(0.5215687f, 0.5333334f, 0.5294118f, 1f);
        temp23.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp23.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp23.Margin = float4(10f, 10f, 0f, 10f);
        temp23.SourceLineNumber = 36;
        temp23.SourceFileName = "Pages/business/manage.ux";
        temp23.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/search.png"));
        temp24.Margin = float4(0f, 0f, 0f, 0f);
        temp24.SourceLineNumber = 39;
        temp24.SourceFileName = "Pages/business/manage.ux";
        temp25.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp25.Alignment = Fuse.Elements.Alignment.Top;
        temp25.Margin = float4(0f, 100f, 0f, 0f);
        temp25.SourceLineNumber = 40;
        temp25.SourceFileName = "Pages/business/manage.ux";
        temp25.Children.Add(temp26);
        temp26.Value = "전체보기";
        temp26.FontSize = 12f;
        temp26.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp26.Margin = float4(0f, 0f, 50f, 0f);
        temp26.SourceLineNumber = 41;
        temp26.SourceFileName = "Pages/business/manage.ux";
        temp27.LayoutMode = Fuse.Controls.ScrollViewLayoutMode.PreserveVisual;
        temp27.Alignment = Fuse.Elements.Alignment.Default;
        temp27.Margin = float4(0f, 130f, 0f, 0f);
        temp27.SourceLineNumber = 45;
        temp27.SourceFileName = "Pages/business/manage.ux";
        temp27.Children.Add(temp28);
        temp27.Children.Add(svp);
        temp28.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp28.ItemSpacing = 10f;
        temp28.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp28.Margin = float4(0f, 20f, 0f, 0f);
        temp28.SourceLineNumber = 46;
        temp28.SourceFileName = "Pages/business/manage.ux";
        temp28.Children.Add(theEach);
        temp28.Children.Add(temp);
        theEach.Reuse = Fuse.Reactive.InstanceReuse.Frame;
        theEach.Name = __selector8;
        theEach.SourceLineNumber = 47;
        theEach.SourceFileName = "Pages/business/manage.ux";
        theEach.Templates.Add(temp29);
        theEach.Bindings.Add(temp30);
        temp1.SourceLineNumber = 47;
        temp1.SourceFileName = "Pages/business/manage.ux";
        temp.SourceLineNumber = 67;
        temp.SourceFileName = "Pages/business/manage.ux";
        temp.Nodes.Add(temp31);
        temp.Bindings.Add(temp33);
        temp31.Color = float4(0.9647059f, 0.9843137f, 1f, 1f);
        temp31.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp31.LayoutRole = Fuse.LayoutRole.Placeholder;
        temp31.SourceLineNumber = 68;
        temp31.SourceFileName = "Pages/business/manage.ux";
        temp31.Children.Add(temp32);
        temp32.Value = "Loading...";
        temp32.Alignment = Fuse.Elements.Alignment.Center;
        temp32.SourceLineNumber = 69;
        temp32.SourceFileName = "Pages/business/manage.ux";
        temp2.SourceLineNumber = 67;
        temp2.SourceFileName = "Pages/business/manage.ux";
        svp.Name = __selector9;
        svp.SourceLineNumber = 74;
        svp.SourceFileName = "Pages/business/manage.ux";
        svp.ReachedEnd += temp_eb22.OnEvent;
        svp.Each = theEach;
        svp.Bindings.Add(temp_eb22);
        temp3.SourceLineNumber = 74;
        temp3.SourceFileName = "Pages/business/manage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(sidebar);
        __g_nametable.Objects.Add(shadow);
        __g_nametable.Objects.Add(sidebarFade);
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(theEach);
        __g_nametable.Objects.Add(svp);
        __g_nametable.Objects.Add(temp_eb22);
        this.Children.Add(temp4);
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
    static global::Uno.UX.Selector __selector9 = "svp";
}
