[Uno.Compiler.UxGenerated]
public partial class signupBis: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    internal global::Fuse.Reactive.EventBinding temp_eb5;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb4",
        "temp_eb5"
    };
    static signupBis()
    {
    }
    [global::Uno.UX.UXConstructor]
    public signupBis(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("goBack");
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("newID");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("newPW");
        var temp2 = new global::Fuse.Controls.TextInput();
        temp2_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp6 = new global::Fuse.Reactive.Data("newName");
        var temp7 = new global::Fuse.Reactive.Data("Save");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Controls.Image();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp10 = new global::Fuse.Controls.Rectangle();
        var temp11 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Controls.Rectangle();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Panel();
        var temp17 = new global::Fuse.Controls.Text();
        var temp18 = new global::Fuse.Controls.Rectangle();
        var temp19 = new global::Fuse.Gestures.Clicked();
        var temp20 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb5 = new global::Fuse.Reactive.EventBinding(temp7);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/business/signupBis.ux";
        temp8.LineNumber = 3;
        temp8.FileName = "Pages/business/signupBis.ux";
        temp8.SourceLineNumber = 3;
        temp8.SourceFileName = "Pages/business/signupBis.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import("../../../Pages/business/signupBis.js"));
        temp9.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp9.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp9.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp9.Margin = float4(20f, 20f, 0f, 0f);
        temp9.Padding = float4(0f, 0f, 0f, 0f);
        temp9.Layer = Fuse.Layer.Layout;
        temp9.SourceLineNumber = 5;
        temp9.SourceFileName = "Pages/business/signupBis.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb4.OnEvent);
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/back.png"));
        temp9.Bindings.Add(temp_eb4);
        temp3.SourceLineNumber = 5;
        temp3.SourceFileName = "Pages/business/signupBis.ux";
        temp10.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp10.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp10.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp10.Y = new Uno.UX.Size(190f, Uno.UX.Unit.Unspecified);
        temp10.SourceLineNumber = 8;
        temp10.SourceFileName = "Pages/business/signupBis.ux";
        temp10.Children.Add(temp);
        temp.PlaceholderText = "ID";
        temp.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.FontSize = 20f;
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.CaretColor = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 9;
        temp.SourceFileName = "Pages/business/signupBis.ux";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp11);
        temp4.SourceLineNumber = 9;
        temp4.SourceFileName = "Pages/business/signupBis.ux";
        temp12.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp12.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp12.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp12.Y = new Uno.UX.Size(260f, Uno.UX.Unit.Unspecified);
        temp12.SourceLineNumber = 12;
        temp12.SourceFileName = "Pages/business/signupBis.ux";
        temp12.Children.Add(temp1);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "Password";
        temp1.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp1.FontSize = 20f;
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.CaretColor = float4(0f, 0f, 0f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.SourceLineNumber = 13;
        temp1.SourceFileName = "Pages/business/signupBis.ux";
        global::Fuse.Controls.Grid.SetRow(temp1, 0);
        global::Fuse.Controls.Grid.SetColumn(temp1, 1);
        temp1.Bindings.Add(temp13);
        temp5.SourceLineNumber = 13;
        temp5.SourceFileName = "Pages/business/signupBis.ux";
        temp14.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp14.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp14.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp14.Y = new Uno.UX.Size(330f, Uno.UX.Unit.Unspecified);
        temp14.SourceLineNumber = 16;
        temp14.SourceFileName = "Pages/business/signupBis.ux";
        temp14.Children.Add(temp2);
        temp2.PlaceholderText = "Name";
        temp2.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp2.FontSize = 20f;
        temp2.TextColor = float4(0f, 0f, 0f, 1f);
        temp2.CaretColor = float4(0f, 0f, 0f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.SourceLineNumber = 17;
        temp2.SourceFileName = "Pages/business/signupBis.ux";
        global::Fuse.Controls.Grid.SetRow(temp2, 0);
        global::Fuse.Controls.Grid.SetColumn(temp2, 1);
        temp2.Bindings.Add(temp15);
        temp6.SourceLineNumber = 17;
        temp6.SourceFileName = "Pages/business/signupBis.ux";
        temp16.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp16.Margin = float4(20f, 20f, 20f, 20f);
        temp16.Y = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        temp16.SourceLineNumber = 22;
        temp16.SourceFileName = "Pages/business/signupBis.ux";
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp18);
        temp16.Children.Add(temp19);
        temp17.Value = "가입하기";
        temp17.FontSize = 20f;
        temp17.Color = float4(1f, 1f, 1f, 1f);
        temp17.Alignment = Fuse.Elements.Alignment.Center;
        temp17.SourceLineNumber = 23;
        temp17.SourceFileName = "Pages/business/signupBis.ux";
        temp18.Color = float4(0.3607843f, 0.6705883f, 0.9960784f, 1f);
        temp18.SourceLineNumber = 24;
        temp18.SourceFileName = "Pages/business/signupBis.ux";
        temp19.SourceLineNumber = 25;
        temp19.SourceFileName = "Pages/business/signupBis.ux";
        temp19.Actions.Add(temp20);
        temp19.Bindings.Add(temp_eb5);
        temp20.SourceLineNumber = 26;
        temp20.SourceFileName = "Pages/business/signupBis.ux";
        temp20.Handler += temp_eb5.OnEvent;
        temp7.SourceLineNumber = 26;
        temp7.SourceFileName = "Pages/business/signupBis.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb4);
        __g_nametable.Objects.Add(temp_eb5);
        this.Children.Add(temp8);
        this.Children.Add(temp9);
        this.Children.Add(temp10);
        this.Children.Add(temp12);
        this.Children.Add(temp14);
        this.Children.Add(temp16);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
