[Uno.Compiler.UxGenerated]
public partial class signupInd: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb7",
        "temp_eb8"
    };
    static signupInd()
    {
    }
    [global::Uno.UX.UXConstructor]
    public signupInd(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp6 = new global::Fuse.Reactive.Data("goBack");
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp7 = new global::Fuse.Reactive.Data("newID");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("newPW");
        var temp2 = new global::Fuse.Controls.TextInput();
        temp2_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp2, __selector0);
        var temp9 = new global::Fuse.Reactive.Data("newName");
        var temp3 = new global::Fuse.Controls.TextInput();
        temp3_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp3, __selector0);
        var temp10 = new global::Fuse.Reactive.Data("dayOfbirth");
        var temp4 = new global::Fuse.Controls.TextInput();
        temp4_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp4, __selector0);
        var temp11 = new global::Fuse.Reactive.Data("sex");
        var temp5 = new global::Fuse.Controls.TextInput();
        temp5_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp5, __selector0);
        var temp12 = new global::Fuse.Reactive.Data("phoneNum");
        var temp13 = new global::Fuse.Reactive.Data("Save");
        var temp14 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp15 = new global::Fuse.Controls.Image();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp16 = new global::Fuse.Controls.Rectangle();
        var temp17 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
        var temp18 = new global::Fuse.Controls.Rectangle();
        var temp19 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Controls.Rectangle();
        var temp21 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        var temp22 = new global::Fuse.Controls.Rectangle();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Rectangle();
        var temp25 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp11, Fuse.Reactive.BindingMode.Default);
        var temp26 = new global::Fuse.Controls.Rectangle();
        var temp27 = new global::Fuse.Reactive.DataBinding(temp5_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::Fuse.Controls.Panel();
        var temp29 = new global::Fuse.Controls.Text();
        var temp30 = new global::Fuse.Controls.Rectangle();
        var temp31 = new global::Fuse.Gestures.Clicked();
        var temp32 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp13);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/signupInd.ux";
        temp14.LineNumber = 3;
        temp14.FileName = "Pages/individual/signupInd.ux";
        temp14.SourceLineNumber = 3;
        temp14.SourceFileName = "Pages/individual/signupInd.ux";
        temp14.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/individual/signupInd.js"));
        temp15.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp15.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp15.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp15.Margin = float4(20f, 20f, 0f, 0f);
        temp15.Padding = float4(0f, 0f, 0f, 0f);
        temp15.Y = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp15.Layer = Fuse.Layer.Layout;
        temp15.SourceLineNumber = 5;
        temp15.SourceFileName = "Pages/individual/signupInd.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb7.OnEvent);
        temp15.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/back.png"));
        temp15.Bindings.Add(temp_eb7);
        temp6.SourceLineNumber = 5;
        temp6.SourceFileName = "Pages/individual/signupInd.ux";
        temp16.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp16.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp16.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp16.Y = new Uno.UX.Size(100f, Uno.UX.Unit.Unspecified);
        temp16.SourceLineNumber = 8;
        temp16.SourceFileName = "Pages/individual/signupInd.ux";
        temp16.Children.Add(temp);
        temp.PlaceholderText = "아이디";
        temp.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp.FontSize = 20f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.CaretColor = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 9;
        temp.SourceFileName = "Pages/individual/signupInd.ux";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp17);
        temp7.SourceLineNumber = 9;
        temp7.SourceFileName = "Pages/individual/signupInd.ux";
        temp18.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp18.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp18.Y = new Uno.UX.Size(170f, Uno.UX.Unit.Unspecified);
        temp18.SourceLineNumber = 12;
        temp18.SourceFileName = "Pages/individual/signupInd.ux";
        temp18.Children.Add(temp1);
        temp1.IsPassword = true;
        temp1.PlaceholderText = "비밀번호";
        temp1.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp1.FontSize = 20f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.CaretColor = float4(0f, 0f, 0f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.SourceLineNumber = 13;
        temp1.SourceFileName = "Pages/individual/signupInd.ux";
        global::Fuse.Controls.Grid.SetRow(temp1, 0);
        global::Fuse.Controls.Grid.SetColumn(temp1, 1);
        temp1.Bindings.Add(temp19);
        temp8.SourceLineNumber = 13;
        temp8.SourceFileName = "Pages/individual/signupInd.ux";
        temp20.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp20.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp20.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp20.Y = new Uno.UX.Size(240f, Uno.UX.Unit.Unspecified);
        temp20.SourceLineNumber = 16;
        temp20.SourceFileName = "Pages/individual/signupInd.ux";
        temp20.Children.Add(temp2);
        temp2.PlaceholderText = "이름";
        temp2.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp2.FontSize = 20f;
        temp2.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp2.TextColor = float4(0f, 0f, 0f, 1f);
        temp2.CaretColor = float4(0f, 0f, 0f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.SourceLineNumber = 17;
        temp2.SourceFileName = "Pages/individual/signupInd.ux";
        global::Fuse.Controls.Grid.SetRow(temp2, 0);
        global::Fuse.Controls.Grid.SetColumn(temp2, 1);
        temp2.Bindings.Add(temp21);
        temp9.SourceLineNumber = 17;
        temp9.SourceFileName = "Pages/individual/signupInd.ux";
        temp22.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp22.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp22.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp22.X = new Uno.UX.Size(63f, Uno.UX.Unit.Unspecified);
        temp22.Y = new Uno.UX.Size(310f, Uno.UX.Unit.Unspecified);
        temp22.SourceLineNumber = 20;
        temp22.SourceFileName = "Pages/individual/signupInd.ux";
        temp22.Children.Add(temp3);
        temp3.PlaceholderText = "생년월일(6자리)";
        temp3.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp3.MaxLength = 6;
        temp3.FontSize = 20f;
        temp3.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp3.TextColor = float4(0f, 0f, 0f, 1f);
        temp3.InputHint = Fuse.Controls.TextInputHint.Number;
        temp3.CaretColor = float4(0f, 0f, 0f, 1f);
        temp3.Alignment = Fuse.Elements.Alignment.Center;
        temp3.SourceLineNumber = 21;
        temp3.SourceFileName = "Pages/individual/signupInd.ux";
        global::Fuse.Controls.Grid.SetRow(temp3, 0);
        global::Fuse.Controls.Grid.SetColumn(temp3, 1);
        temp3.Bindings.Add(temp23);
        temp10.SourceLineNumber = 21;
        temp10.SourceFileName = "Pages/individual/signupInd.ux";
        temp24.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp24.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp24.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp24.X = new Uno.UX.Size(242f, Uno.UX.Unit.Unspecified);
        temp24.Y = new Uno.UX.Size(310f, Uno.UX.Unit.Unspecified);
        temp24.SourceLineNumber = 24;
        temp24.SourceFileName = "Pages/individual/signupInd.ux";
        temp24.Children.Add(temp4);
        temp4.PlaceholderText = "남/여";
        temp4.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp4.ActionStyle = Fuse.Controls.TextInputActionStyle.Next;
        temp4.FontSize = 20f;
        temp4.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp4.TextColor = float4(0f, 0f, 0f, 1f);
        temp4.CaretColor = float4(0f, 0f, 0f, 1f);
        temp4.Alignment = Fuse.Elements.Alignment.Center;
        temp4.SourceLineNumber = 25;
        temp4.SourceFileName = "Pages/individual/signupInd.ux";
        global::Fuse.Controls.Grid.SetRow(temp4, 0);
        global::Fuse.Controls.Grid.SetColumn(temp4, 1);
        temp4.Bindings.Add(temp25);
        temp11.SourceLineNumber = 25;
        temp11.SourceFileName = "Pages/individual/signupInd.ux";
        temp26.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp26.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp26.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp26.Y = new Uno.UX.Size(380f, Uno.UX.Unit.Unspecified);
        temp26.SourceLineNumber = 28;
        temp26.SourceFileName = "Pages/individual/signupInd.ux";
        temp26.Children.Add(temp5);
        temp5.PlaceholderText = "휴대폰 번호('-' 제외)";
        temp5.PlaceholderColor = float4(0.6f, 0.6f, 0.6f, 1f);
        temp5.ActionStyle = Fuse.Controls.TextInputActionStyle.Send;
        temp5.MaxLength = 11;
        temp5.FontSize = 20f;
        temp5.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp5.TextColor = float4(0f, 0f, 0f, 1f);
        temp5.InputHint = Fuse.Controls.TextInputHint.Phone;
        temp5.CaretColor = float4(0f, 0f, 0f, 1f);
        temp5.Alignment = Fuse.Elements.Alignment.Center;
        temp5.SourceLineNumber = 29;
        temp5.SourceFileName = "Pages/individual/signupInd.ux";
        global::Fuse.Controls.Grid.SetRow(temp5, 0);
        global::Fuse.Controls.Grid.SetColumn(temp5, 1);
        temp5.Bindings.Add(temp27);
        temp12.SourceLineNumber = 29;
        temp12.SourceFileName = "Pages/individual/signupInd.ux";
        temp28.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp28.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp28.Margin = float4(20f, 20f, 20f, 20f);
        temp28.Y = new Uno.UX.Size(450f, Uno.UX.Unit.Unspecified);
        temp28.SourceLineNumber = 34;
        temp28.SourceFileName = "Pages/individual/signupInd.ux";
        temp28.Children.Add(temp29);
        temp28.Children.Add(temp30);
        temp28.Children.Add(temp31);
        temp29.Value = "가입하기";
        temp29.FontSize = 20f;
        temp29.Color = float4(1f, 1f, 1f, 1f);
        temp29.Alignment = Fuse.Elements.Alignment.Center;
        temp29.SourceLineNumber = 35;
        temp29.SourceFileName = "Pages/individual/signupInd.ux";
        temp30.Color = float4(0.3607843f, 0.6705883f, 0.9960784f, 1f);
        temp30.SourceLineNumber = 36;
        temp30.SourceFileName = "Pages/individual/signupInd.ux";
        temp31.SourceLineNumber = 37;
        temp31.SourceFileName = "Pages/individual/signupInd.ux";
        temp31.Actions.Add(temp32);
        temp31.Bindings.Add(temp_eb8);
        temp32.SourceLineNumber = 38;
        temp32.SourceFileName = "Pages/individual/signupInd.ux";
        temp32.Handler += temp_eb8.OnEvent;
        temp13.SourceLineNumber = 38;
        temp13.SourceFileName = "Pages/individual/signupInd.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb7);
        __g_nametable.Objects.Add(temp_eb8);
        this.Children.Add(temp14);
        this.Children.Add(temp15);
        this.Children.Add(temp16);
        this.Children.Add(temp18);
        this.Children.Add(temp20);
        this.Children.Add(temp22);
        this.Children.Add(temp24);
        this.Children.Add(temp26);
        this.Children.Add(temp28);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
