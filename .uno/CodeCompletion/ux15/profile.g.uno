[Uno.Compiler.UxGenerated]
public partial class profile: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
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
        var temp = new global::Fuse.Controls.Panel();
        var temp1 = new global::Fuse.Controls.StackPanel();
        var temp2 = new global::Fuse.Controls.Rectangle();
        var temp3 = new global::Fuse.Controls.Circle();
        var temp4 = new global::Fuse.Controls.Text();
        var temp5 = new global::Fuse.Controls.Rectangle();
        var temp6 = new global::Fuse.Drawing.Stroke();
        var temp7 = new global::Fuse.Controls.Rectangle();
        var temp8 = new global::Fuse.Controls.Text();
        var temp9 = new global::Fuse.Drawing.StaticSolidColor(float4(0.8156863f, 0.8196079f, 0.8156863f, 0.5372549f));
        var temp10 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/profile.ux";
        temp.Alignment = Fuse.Elements.Alignment.Top;
        temp.SourceLineNumber = 5;
        temp.SourceFileName = "Pages/individual/profile.ux";
        temp.Background = temp10;
        temp.Children.Add(temp1);
        temp1.Margin = float4(0f, 120f, 0f, 0f);
        temp1.SourceLineNumber = 6;
        temp1.SourceFileName = "Pages/individual/profile.ux";
        temp1.Children.Add(temp2);
        temp1.Children.Add(temp5);
        temp1.Children.Add(temp7);
        temp2.SourceLineNumber = 7;
        temp2.SourceFileName = "Pages/individual/profile.ux";
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp4);
        temp3.Color = float4(0.8196079f, 0.8196079f, 0.8196079f, 1f);
        temp3.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp3.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
        temp3.Alignment = Fuse.Elements.Alignment.Left;
        temp3.Margin = float4(60f, 0f, 0f, 0f);
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "Pages/individual/profile.ux";
        temp4.Value = "사용자 님";
        temp4.FontSize = 15f;
        temp4.Alignment = Fuse.Elements.Alignment.CenterRight;
        temp4.Margin = float4(0f, 0f, 100f, 0f);
        temp4.SourceLineNumber = 9;
        temp4.SourceFileName = "Pages/individual/profile.ux";
        temp5.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp5.Height = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp5.Margin = float4(0f, 50f, 0f, 0f);
        temp5.SourceLineNumber = 11;
        temp5.SourceFileName = "Pages/individual/profile.ux";
        temp5.Strokes.Add(temp6);
        temp6.Color = float4(0.8823529f, 0.8901961f, 0.8823529f, 1f);
        temp6.Width = 1f;
        temp7.Height = new Uno.UX.Size(500f, Uno.UX.Unit.Unspecified);
        temp7.Alignment = Fuse.Elements.Alignment.Default;
        temp7.Margin = float4(0f, 40f, 0f, 0f);
        temp7.SourceLineNumber = 14;
        temp7.SourceFileName = "Pages/individual/profile.ux";
        temp7.Background = temp9;
        temp7.Children.Add(temp8);
        temp8.Value = "로그아웃";
        temp8.FontSize = 10f;
        temp8.Alignment = Fuse.Elements.Alignment.TopRight;
        temp8.Margin = float4(0f, 20f, 20f, 0f);
        temp8.SourceLineNumber = 15;
        temp8.SourceFileName = "Pages/individual/profile.ux";
        this.Children.Add(temp);
    }
}
