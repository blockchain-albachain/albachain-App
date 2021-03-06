[Uno.Compiler.UxGenerated]
public partial class detailContract: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb13;
    internal global::Fuse.Controls.Text titleText;
    internal global::Fuse.Controls.Text time;
    internal global::Fuse.Controls.Rectangle agreebtn;
    internal global::Fuse.Controls.Rectangle cancelbtn;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb13",
        "titleText",
        "time",
        "agreebtn",
        "cancelbtn"
    };
    static detailContract()
    {
    }
    [global::Uno.UX.UXConstructor]
    public detailContract(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("goBack");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("name");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp1, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("content");
        var temp6 = new global::Fuse.Reactive.Data("expense");
        var temp7 = "원";
        var temp8 = new global::Fuse.Reactive.Constant(temp7);
        var temp2 = new global::Fuse.Controls.Text();
        temp2_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp2, __selector0);
        var temp9 = new global::Fuse.Reactive.Add(temp6, temp8);
        var temp10 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp11 = new global::Fuse.Controls.ClientPanel();
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Controls.Rectangle();
        var temp14 = new global::Fuse.Controls.Grid();
        var temp15 = new global::Fuse.Controls.Image();
        temp_eb13 = new global::Fuse.Reactive.EventBinding(temp3);
        titleText = new global::Fuse.Controls.Text();
        var temp16 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../Assets/Fonts/Roboto-Black.ttf")));
        var temp17 = new global::Fuse.Controls.ScrollView();
        var temp18 = new global::Fuse.Controls.StackPanel();
        var temp19 = new global::Fuse.Controls.Rectangle();
        var temp20 = new global::Fuse.Controls.StackPanel();
        var temp21 = new global::Fuse.Controls.Rectangle();
        var temp22 = new global::Fuse.Controls.Circle();
        var temp23 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp24 = new global::Fuse.Controls.Rectangle();
        var temp25 = new global::Fuse.Controls.Rectangle();
        var temp26 = new global::Fuse.Controls.Text();
        var temp27 = new global::Fuse.Controls.Text();
        var temp28 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        var temp29 = new global::Fuse.Controls.Text();
        var temp30 = new global::Fuse.Controls.Text();
        time = new global::Fuse.Controls.Text();
        var temp31 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
        var temp32 = new global::Fuse.Controls.Shadow();
        var temp33 = new global::Fuse.Controls.Panel();
        agreebtn = new global::Fuse.Controls.Rectangle();
        var temp34 = new global::Fuse.Controls.Text();
        var temp35 = new global::Fuse.Gestures.WhilePressed();
        var temp36 = new global::Fuse.Animations.Scale();
        cancelbtn = new global::Fuse.Controls.Rectangle();
        var temp37 = new global::Fuse.Controls.Text();
        var temp38 = new global::Fuse.Gestures.WhilePressed();
        var temp39 = new global::Fuse.Animations.Scale();
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/business/detailContract.ux";
        temp10.Code = "\n\tvar Observable = require('FuseJS/Observable');\n\n\tvar name = Observable(\"\");\n\n\texports.name = this.Parameter.map(function(param) {\n\t\tname.value = param.name;\n\t\treturn param.name;\n\t});\n\n\texports.expense = this.Parameter.map(function(param) {\n\t\treturn param.expense;\n\t});\n\n\texports.content = this.Parameter.map(function(param) {\n\t\treturn param.content;\n\t});\n\n\texports.goBack = function()\n\t{\n\t\trouter.goBack();\n\t};\n\n\texports.cancel = function(){ router.goto(\"contractCan\", {name: name.value}); };\n\n\t";
        temp10.LineNumber = 4;
        temp10.FileName = "Pages/business/detailContract.ux";
        temp10.SourceLineNumber = 4;
        temp10.SourceFileName = "Pages/business/detailContract.ux";
        temp11.SourceLineNumber = 30;
        temp11.SourceFileName = "Pages/business/detailContract.ux";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp17);
        temp12.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
        temp12.Alignment = Fuse.Elements.Alignment.Top;
        temp12.SourceLineNumber = 32;
        temp12.SourceFileName = "Pages/business/detailContract.ux";
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Width = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
        temp13.Alignment = Fuse.Elements.Alignment.Left;
        temp13.Margin = float4(35f, 0f, 0f, 23f);
        temp13.SourceLineNumber = 33;
        temp13.SourceFileName = "Pages/business/detailContract.ux";
        temp14.RowCount = 1;
        temp14.ColumnCount = 3;
        temp14.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp14.Margin = float4(5f, 5f, 5f, 5f);
        temp14.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp14.SourceLineNumber = 34;
        temp14.SourceFileName = "Pages/business/detailContract.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Top);
        temp14.Children.Add(temp15);
        temp14.Children.Add(titleText);
        temp15.Width = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp15.Height = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp15.Alignment = Fuse.Elements.Alignment.Left;
        temp15.Margin = float4(30f, 0f, 0f, 0f);
        temp15.Layer = Fuse.Layer.Layout;
        temp15.SourceLineNumber = 35;
        temp15.SourceFileName = "Pages/business/detailContract.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb13.OnEvent);
        temp15.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/back.png"));
        temp15.Bindings.Add(temp_eb13);
        temp3.SourceLineNumber = 35;
        temp3.SourceFileName = "Pages/business/detailContract.ux";
        titleText.Value = "계약요청";
        titleText.FontSize = 25f;
        titleText.TextAlignment = Fuse.Controls.TextAlignment.Center;
        titleText.TextColor = float4(0f, 0f, 0f, 1f);
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Margin = float4(0f, 0f, 0f, 0f);
        titleText.Name = __selector1;
        titleText.SourceLineNumber = 37;
        titleText.SourceFileName = "Pages/business/detailContract.ux";
        titleText.Font = temp16;
        temp17.SourceLineNumber = 44;
        temp17.SourceFileName = "Pages/business/detailContract.ux";
        temp17.Children.Add(temp18);
        temp18.ItemSpacing = 20f;
        temp18.Margin = float4(0f, 80f, 0f, 0f);
        temp18.SourceLineNumber = 45;
        temp18.SourceFileName = "Pages/business/detailContract.ux";
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp33);
        temp19.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp19.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
        temp19.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(500f, Uno.UX.Unit.Unspecified);
        temp19.SourceLineNumber = 46;
        temp19.SourceFileName = "Pages/business/detailContract.ux";
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp32);
        temp20.SourceLineNumber = 47;
        temp20.SourceFileName = "Pages/business/detailContract.ux";
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp24);
        temp20.Children.Add(temp25);
        temp21.Alignment = Fuse.Elements.Alignment.Default;
        temp21.Margin = float4(0f, 20f, 0f, 0f);
        temp21.SourceLineNumber = 48;
        temp21.SourceFileName = "Pages/business/detailContract.ux";
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp);
        temp22.Color = float4(0.8862745f, 0.8901961f, 0.8862745f, 1f);
        temp22.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp22.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp22.Alignment = Fuse.Elements.Alignment.Left;
        temp22.Margin = float4(20f, 0f, 0f, 0f);
        temp22.SourceLineNumber = 49;
        temp22.SourceFileName = "Pages/business/detailContract.ux";
        temp.FontSize = 20f;
        temp.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(0f, 0f, 70f, 0f);
        temp.Padding = float4(0f, 0f, 0f, 0f);
        temp.SourceLineNumber = 50;
        temp.SourceFileName = "Pages/business/detailContract.ux";
        temp.Bindings.Add(temp23);
        temp4.SourceLineNumber = 50;
        temp4.SourceFileName = "Pages/business/detailContract.ux";
        temp24.Color = float4(0.8823529f, 0.8901961f, 0.8823529f, 1f);
        temp24.Width = new Uno.UX.Size(280f, Uno.UX.Unit.Unspecified);
        temp24.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp24.Margin = float4(0f, 20f, 0f, 0f);
        temp24.SourceLineNumber = 53;
        temp24.SourceFileName = "Pages/business/detailContract.ux";
        temp25.Margin = float4(0f, 20f, 0f, 0f);
        temp25.SourceLineNumber = 54;
        temp25.SourceFileName = "Pages/business/detailContract.ux";
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp27);
        temp25.Children.Add(temp1);
        temp25.Children.Add(temp29);
        temp25.Children.Add(temp30);
        temp25.Children.Add(time);
        temp25.Children.Add(temp2);
        temp26.Value = "계약내용";
        temp26.TextColor = float4(0f, 0f, 0f, 1f);
        temp26.Margin = float4(30f, 0f, 0f, 0f);
        temp26.SourceLineNumber = 55;
        temp26.SourceFileName = "Pages/business/detailContract.ux";
        temp27.Value = "근무요일";
        temp27.FontSize = 15f;
        temp27.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
        temp27.Margin = float4(30f, 40f, 0f, 0f);
        temp27.SourceLineNumber = 56;
        temp27.SourceFileName = "Pages/business/detailContract.ux";
        temp1.FontSize = 15f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp1.TextColor = float4(0.4705882f, 0.4705882f, 0.4705882f, 1f);
        temp1.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
        temp1.Margin = float4(110f, 40f, 0f, 0f);
        temp1.SourceLineNumber = 57;
        temp1.SourceFileName = "Pages/business/detailContract.ux";
        temp1.Bindings.Add(temp28);
        temp5.SourceLineNumber = 57;
        temp5.SourceFileName = "Pages/business/detailContract.ux";
        temp29.Value = "근무시간";
        temp29.FontSize = 15f;
        temp29.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
        temp29.Margin = float4(30f, 65f, 0f, 0f);
        temp29.SourceLineNumber = 58;
        temp29.SourceFileName = "Pages/business/detailContract.ux";
        temp30.Value = "PM 8:00 ~ AM 3:00";
        temp30.FontSize = 15f;
        temp30.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp30.TextColor = float4(0.4705882f, 0.4705882f, 0.4705882f, 1f);
        temp30.Color = float4(0.2509804f, 0.254902f, 0.2509804f, 1f);
        temp30.Margin = float4(110f, 65f, 0f, 0f);
        temp30.SourceLineNumber = 59;
        temp30.SourceFileName = "Pages/business/detailContract.ux";
        time.Value = "시급";
        time.FontSize = 15f;
        time.TextColor = float4(0.4039216f, 0.6470588f, 0.8f, 1f);
        time.Margin = float4(30f, 90f, 0f, 0f);
        time.Name = __selector2;
        time.SourceLineNumber = 60;
        time.SourceFileName = "Pages/business/detailContract.ux";
        temp2.FontSize = 15f;
        temp2.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp2.TextColor = float4(0.4705882f, 0.4705882f, 0.4705882f, 1f);
        temp2.Color = float4(0.5176471f, 0.5333334f, 0.5254902f, 1f);
        temp2.Margin = float4(110f, 90f, 0f, 0f);
        temp2.SourceLineNumber = 61;
        temp2.SourceFileName = "Pages/business/detailContract.ux";
        temp2.Bindings.Add(temp31);
        temp9.SourceLineNumber = 61;
        temp9.SourceFileName = "Pages/business/detailContract.ux";
        temp6.SourceLineNumber = 61;
        temp6.SourceFileName = "Pages/business/detailContract.ux";
        temp8.SourceLineNumber = 61;
        temp8.SourceFileName = "Pages/business/detailContract.ux";
        temp32.Angle = 107f;
        temp32.SourceLineNumber = 64;
        temp32.SourceFileName = "Pages/business/detailContract.ux";
        temp33.Margin = float4(0f, 20f, 0f, 50f);
        temp33.SourceLineNumber = 67;
        temp33.SourceFileName = "Pages/business/detailContract.ux";
        temp33.Children.Add(agreebtn);
        temp33.Children.Add(cancelbtn);
        agreebtn.CornerRadius = float4(30f, 30f, 30f, 30f);
        agreebtn.Color = float4(0.3921569f, 0.6431373f, 0.8039216f, 1f);
        agreebtn.Width = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        agreebtn.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        agreebtn.Alignment = Fuse.Elements.Alignment.Left;
        agreebtn.Margin = float4(40f, 0f, 0f, 0f);
        agreebtn.Name = __selector3;
        agreebtn.SourceLineNumber = 68;
        agreebtn.SourceFileName = "Pages/business/detailContract.ux";
        agreebtn.Children.Add(temp34);
        agreebtn.Children.Add(temp35);
        temp34.Value = "수락";
        temp34.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp34.TextColor = float4(1f, 1f, 1f, 1f);
        temp34.Alignment = Fuse.Elements.Alignment.Center;
        temp34.SourceLineNumber = 69;
        temp34.SourceFileName = "Pages/business/detailContract.ux";
        temp35.SourceLineNumber = 70;
        temp35.SourceFileName = "Pages/business/detailContract.ux";
        temp35.Animators.Add(temp36);
        temp36.Factor = 0.9f;
        temp36.Duration = 0.05;
        temp36.Target = agreebtn;
        cancelbtn.CornerRadius = float4(30f, 30f, 30f, 30f);
        cancelbtn.Color = float4(0.6039216f, 0.6078432f, 0.6039216f, 1f);
        cancelbtn.Width = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        cancelbtn.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        cancelbtn.Alignment = Fuse.Elements.Alignment.Right;
        cancelbtn.Margin = float4(0f, 0f, 40f, 0f);
        cancelbtn.Name = __selector4;
        cancelbtn.SourceLineNumber = 77;
        cancelbtn.SourceFileName = "Pages/business/detailContract.ux";
        cancelbtn.Children.Add(temp37);
        cancelbtn.Children.Add(temp38);
        temp37.Value = "거절";
        temp37.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp37.TextColor = float4(1f, 1f, 1f, 1f);
        temp37.Alignment = Fuse.Elements.Alignment.Center;
        temp37.SourceLineNumber = 78;
        temp37.SourceFileName = "Pages/business/detailContract.ux";
        temp38.SourceLineNumber = 79;
        temp38.SourceFileName = "Pages/business/detailContract.ux";
        temp38.Animators.Add(temp39);
        temp39.Factor = 0.9f;
        temp39.Duration = 0.05;
        temp39.Target = cancelbtn;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb13);
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(time);
        __g_nametable.Objects.Add(agreebtn);
        __g_nametable.Objects.Add(cancelbtn);
        this.Children.Add(temp10);
        this.Children.Add(temp11);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "titleText";
    static global::Uno.UX.Selector __selector2 = "time";
    static global::Uno.UX.Selector __selector3 = "agreebtn";
    static global::Uno.UX.Selector __selector4 = "cancelbtn";
}
