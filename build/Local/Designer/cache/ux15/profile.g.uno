[Uno.Compiler.UxGenerated]
public partial class profile: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb25;
    internal global::Fuse.Reactive.EventBinding temp_eb26;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb25",
        "temp_eb26"
    };
    static profile()
    {
    }
    [global::Uno.UX.UXConstructor]
    public profile(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("coinState");
        var temp3 = "코인 현황 : ";
        var temp4 = new global::Fuse.Reactive.Constant(temp3);
        var temp5 = new global::Fuse.Reactive.Data("coin");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp6 = new global::Fuse.Reactive.Add(temp4, temp5);
        var temp7 = new global::Fuse.Reactive.Data("coinUp");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new albachain_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp8 = new global::Fuse.Reactive.Data("sendCoin");
        var temp9 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp10 = new global::Fuse.Controls.Panel();
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Controls.Rectangle();
        var temp13 = new global::Fuse.Controls.Circle();
        temp_eb25 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp14 = new global::Fuse.Controls.Text();
        var temp15 = new global::Fuse.Controls.Rectangle();
        var temp16 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
        var temp17 = new global::Fuse.Drawing.Stroke();
        var temp18 = new global::Fuse.Controls.Rectangle();
        var temp19 = new global::Fuse.Controls.Rectangle();
        var temp20 = new global::Fuse.Controls.Text();
        var temp21 = new global::Fuse.Gestures.Clicked();
        var temp22 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb26 = new global::Fuse.Reactive.EventBinding(temp7);
        var temp23 = new global::Fuse.Controls.Rectangle();
        var temp24 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp8, Fuse.Reactive.BindingMode.Default);
        var temp25 = new global::Fuse.Drawing.Stroke();
        var temp26 = new global::Fuse.Controls.Rectangle();
        var temp27 = new global::Fuse.Controls.Text();
        var temp28 = new global::Fuse.Drawing.StaticSolidColor(float4(0.8156863f, 0.8196079f, 0.8156863f, 0.5372549f));
        var temp29 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/business/profile.ux";
        temp9.LineNumber = 3;
        temp9.FileName = "Pages/business/profile.ux";
        temp9.SourceLineNumber = 3;
        temp9.SourceFileName = "Pages/business/profile.ux";
        temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/business/profile.js"));
        temp10.Alignment = Fuse.Elements.Alignment.Top;
        temp10.SourceLineNumber = 5;
        temp10.SourceFileName = "Pages/business/profile.ux";
        temp10.Background = temp29;
        temp10.Children.Add(temp11);
        temp11.Margin = float4(0f, 120f, 0f, 0f);
        temp11.SourceLineNumber = 6;
        temp11.SourceFileName = "Pages/business/profile.ux";
        temp11.Children.Add(temp12);
        temp11.Children.Add(temp15);
        temp11.Children.Add(temp18);
        temp11.Children.Add(temp26);
        temp12.SourceLineNumber = 7;
        temp12.SourceFileName = "Pages/business/profile.ux";
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp14);
        temp13.Color = float4(0.8196079f, 0.8196079f, 0.8196079f, 1f);
        temp13.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp13.Alignment = Fuse.Elements.Alignment.Left;
        temp13.Margin = float4(60f, 0f, 0f, 0f);
        temp13.SourceLineNumber = 8;
        temp13.SourceFileName = "Pages/business/profile.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp13, temp_eb25.OnEvent);
        temp13.Bindings.Add(temp_eb25);
        temp2.SourceLineNumber = 8;
        temp2.SourceFileName = "Pages/business/profile.ux";
        temp14.Value = "사용자 님";
        temp14.FontSize = 15f;
        temp14.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp14.Margin = float4(0f, 0f, 100f, 0f);
        temp14.SourceLineNumber = 9;
        temp14.SourceFileName = "Pages/business/profile.ux";
        temp15.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp15.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp15.Margin = float4(0f, 50f, 0f, 0f);
        temp15.SourceLineNumber = 11;
        temp15.SourceFileName = "Pages/business/profile.ux";
        temp15.Strokes.Add(temp17);
        temp15.Children.Add(temp);
        temp.FontSize = 15f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 12;
        temp.SourceFileName = "Pages/business/profile.ux";
        temp.Bindings.Add(temp16);
        temp6.SourceLineNumber = 12;
        temp6.SourceFileName = "Pages/business/profile.ux";
        temp4.SourceLineNumber = 12;
        temp4.SourceFileName = "Pages/business/profile.ux";
        temp5.SourceLineNumber = 12;
        temp5.SourceFileName = "Pages/business/profile.ux";
        temp17.Color = float4(0.8823529f, 0.8901961f, 0.8823529f, 1f);
        temp17.Width = 1f;
        temp18.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp18.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp18.Alignment = Fuse.Elements.Alignment.Default;
        temp18.Margin = float4(0f, 20f, 0f, 0f);
        temp18.SourceLineNumber = 15;
        temp18.SourceFileName = "Pages/business/profile.ux";
        temp18.Children.Add(temp19);
        temp18.Children.Add(temp23);
        temp19.Color = float4(0.8862745f, 0.8862745f, 0.8862745f, 1f);
        temp19.Width = new Uno.UX.Size(70f, Uno.UX.Unit.Unspecified);
        temp19.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp19.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp19.SourceLineNumber = 16;
        temp19.SourceFileName = "Pages/business/profile.ux";
        temp19.Children.Add(temp20);
        temp19.Children.Add(temp21);
        temp20.Value = "올리기";
        temp20.FontSize = 14f;
        temp20.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp20.Alignment = Fuse.Elements.Alignment.Center;
        temp20.SourceLineNumber = 17;
        temp20.SourceFileName = "Pages/business/profile.ux";
        temp21.SourceLineNumber = 18;
        temp21.SourceFileName = "Pages/business/profile.ux";
        temp21.Actions.Add(temp22);
        temp21.Bindings.Add(temp_eb26);
        temp22.SourceLineNumber = 19;
        temp22.SourceFileName = "Pages/business/profile.ux";
        temp22.Handler += temp_eb26.OnEvent;
        temp7.SourceLineNumber = 19;
        temp7.SourceFileName = "Pages/business/profile.ux";
        temp23.Width = new Uno.UX.Size(120f, Uno.UX.Unit.Unspecified);
        temp23.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp23.Alignment = Fuse.Elements.Alignment.CenterLeft;
        temp23.SourceLineNumber = 22;
        temp23.SourceFileName = "Pages/business/profile.ux";
        temp23.Strokes.Add(temp25);
        temp23.Children.Add(temp1);
        temp1.PlaceholderText = "알바코인 입력란 ";
        temp1.PlaceholderColor = float4(0.4705882f, 0.4705882f, 0.4705882f, 1f);
        temp1.FontSize = 14f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp1.Margin = float4(0f, 0f, 0f, 0f);
        temp1.SourceLineNumber = 23;
        temp1.SourceFileName = "Pages/business/profile.ux";
        temp1.Bindings.Add(temp24);
        temp8.SourceLineNumber = 23;
        temp8.SourceFileName = "Pages/business/profile.ux";
        temp25.Color = float4(0.8823529f, 0.8901961f, 0.8823529f, 1f);
        temp25.Width = 1f;
        temp26.Height = new Uno.UX.Size(500f, Uno.UX.Unit.Unspecified);
        temp26.Alignment = Fuse.Elements.Alignment.Default;
        temp26.Margin = float4(0f, 40f, 0f, 0f);
        temp26.SourceLineNumber = 27;
        temp26.SourceFileName = "Pages/business/profile.ux";
        temp26.Background = temp28;
        temp26.Children.Add(temp27);
        temp27.Value = "로그아웃";
        temp27.FontSize = 10f;
        temp27.Alignment = Fuse.Elements.Alignment.TopRight;
        temp27.Margin = float4(0f, 20f, 20f, 0f);
        temp27.SourceLineNumber = 28;
        temp27.SourceFileName = "Pages/business/profile.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb25);
        __g_nametable.Objects.Add(temp_eb26);
        this.Children.Add(temp9);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
