[Uno.Compiler.UxGenerated]
public partial class home: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly home __parent;
        [Uno.WeakReference] internal readonly home __parentInstance;
        public Template(home parent, home parentInstance): base(null, false)
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
            __self.Color = float4(0f, 0.4235294f, 0.6666667f, 1f);
            __self.Width = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(15f, Uno.UX.Unit.Unspecified);
            __self.Alignment = Fuse.Elements.Alignment.Default;
            __self.Margin = float4(0f, 0f, 0f, 0f);
            __self.Padding = float4(0f, 0f, 0f, 0f);
            __self.Y = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
            __self.SourceLineNumber = 7;
            __self.SourceFileName = "Pages/individual/home.ux";
            return __self;
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly home __parent;
        [Uno.WeakReference] internal readonly home __parentInstance;
        public Template1(home parent, home parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.DockPanel();
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("title");
            var temp1 = new global::Fuse.Controls.Text();
            temp1_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp1, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("content");
            var temp5 = new global::Fuse.Reactive.Data("expense");
            var temp6 = "원";
            var temp7 = new global::Fuse.Reactive.Constant(temp6);
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp2, __selector0);
            var temp8 = new global::Fuse.Reactive.Add(temp5, temp7);
            var temp9 = new global::Fuse.Controls.Rectangle();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
            __self.Margin = float4(0f, 0f, 0f, 0f);
            __self.SourceLineNumber = 8;
            __self.SourceFileName = "Pages/individual/home.ux";
            temp9.Width = new Uno.UX.Size(160f, Uno.UX.Unit.Unspecified);
            temp9.Height = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
            temp9.Alignment = Fuse.Elements.Alignment.Default;
            temp9.SourceLineNumber = 9;
            temp9.SourceFileName = "Pages/individual/home.ux";
            temp9.Children.Add(temp);
            temp9.Children.Add(temp1);
            temp9.Children.Add(temp2);
            temp.FontSize = 15f;
            temp.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
            temp.SourceLineNumber = 10;
            temp.SourceFileName = "Pages/individual/home.ux";
            temp.Bindings.Add(temp10);
            temp3.SourceLineNumber = 10;
            temp3.SourceFileName = "Pages/individual/home.ux";
            temp1.FontSize = 15f;
            temp1.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
            temp1.Y = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            temp1.SourceLineNumber = 11;
            temp1.SourceFileName = "Pages/individual/home.ux";
            temp1.Bindings.Add(temp11);
            temp4.SourceLineNumber = 11;
            temp4.SourceFileName = "Pages/individual/home.ux";
            temp2.FontSize = 25f;
            temp2.Color = float4(0f, 0.4313726f, 0.6588235f, 1f);
            temp2.Y = new Uno.UX.Size(38f, Uno.UX.Unit.Unspecified);
            temp2.SourceLineNumber = 12;
            temp2.SourceFileName = "Pages/individual/home.ux";
            temp2.Bindings.Add(temp12);
            temp8.SourceLineNumber = 12;
            temp8.SourceFileName = "Pages/individual/home.ux";
            temp5.SourceLineNumber = 12;
            temp5.SourceFileName = "Pages/individual/home.ux";
            temp7.SourceLineNumber = 12;
            temp7.SourceFileName = "Pages/individual/home.ux";
            __self.Children.Add(temp9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
    global::Uno.UX.Property<object> theEach_Items_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    internal global::Fuse.Reactive.Each theEach;
    internal global::Fuse.Controls.ScrollViewPager svp;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    static home()
    {
    }
    [global::Uno.UX.UXConstructor]
    public home()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        theEach = new global::Fuse.Reactive.Each();
        theEach_Items_inst = new albachain_FuseReactiveEach_Items_Property(theEach, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("items");
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new albachain_FuseTriggersWhileBool_Value_Property(temp, __selector1);
        var temp2 = new global::Fuse.Reactive.Data("isLoading");
        var temp3 = new global::Fuse.Reactive.Data("loadMore");
        var temp4 = new global::Fuse.Controls.ScrollView();
        var temp5 = new global::Fuse.Controls.StackPanel();
        var temp6 = new Template(this, this);
        var temp7 = new Template1(this, this);
        var temp8 = new global::Fuse.Reactive.DataBinding(theEach_Items_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp9 = new global::Fuse.Controls.Panel();
        var temp10 = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        svp = new global::Fuse.Controls.ScrollViewPager();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp3);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/home.ux";
        temp4.LayoutMode = Fuse.Controls.ScrollViewLayoutMode.PreserveVisual;
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Pages/individual/home.ux";
        temp4.Children.Add(temp5);
        temp4.Children.Add(svp);
        temp5.Orientation = Fuse.Layouts.Orientation.Vertical;
        temp5.ItemSpacing = 10f;
        temp5.Margin = float4(0f, 190f, 0f, 0f);
        temp5.Padding = float4(0f, 50f, 0f, 0f);
        temp5.SourceLineNumber = 4;
        temp5.SourceFileName = "Pages/individual/home.ux";
        temp5.Children.Add(theEach);
        temp5.Children.Add(temp);
        theEach.Reuse = Fuse.Reactive.InstanceReuse.Frame;
        theEach.Name = __selector2;
        theEach.SourceLineNumber = 6;
        theEach.SourceFileName = "Pages/individual/home.ux";
        theEach.Templates.Add(temp6);
        theEach.Templates.Add(temp7);
        theEach.Bindings.Add(temp8);
        temp1.SourceLineNumber = 6;
        temp1.SourceFileName = "Pages/individual/home.ux";
        temp.SourceLineNumber = 17;
        temp.SourceFileName = "Pages/individual/home.ux";
        temp.Nodes.Add(temp9);
        temp.Bindings.Add(temp11);
        temp9.Color = float4(0.9647059f, 0.9843137f, 1f, 1f);
        temp9.Height = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp9.LayoutRole = Fuse.LayoutRole.Placeholder;
        temp9.SourceLineNumber = 18;
        temp9.SourceFileName = "Pages/individual/home.ux";
        temp9.Children.Add(temp10);
        temp10.Value = "Loading...";
        temp10.Alignment = Fuse.Elements.Alignment.Center;
        temp10.SourceLineNumber = 19;
        temp10.SourceFileName = "Pages/individual/home.ux";
        temp2.SourceLineNumber = 17;
        temp2.SourceFileName = "Pages/individual/home.ux";
        svp.Name = __selector3;
        svp.SourceLineNumber = 24;
        svp.SourceFileName = "Pages/individual/home.ux";
        svp.ReachedEnd += temp_eb6.OnEvent;
        svp.Each = theEach;
        svp.Bindings.Add(temp_eb6);
        temp3.SourceLineNumber = 24;
        temp3.SourceFileName = "Pages/individual/home.ux";
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "theEach";
    static global::Uno.UX.Selector __selector3 = "svp";
}
