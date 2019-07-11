[Uno.Compiler.UxGenerated]
public partial class startPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb0"
    };
    static startPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public startPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new global::Fuse.Reactive.Data("next");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Controls.Text();
        var temp2 = new global::Fuse.Controls.Text();
        var temp3 = new global::Fuse.Controls.Text();
        var temp4 = new global::Fuse.Controls.Text();
        var temp5 = new global::Fuse.Controls.Text();
        var temp6 = new global::Fuse.Controls.Image();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp);
        var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        this.SourceLineNumber = 1;
        this.SourceFileName = "startPage.ux";
        temp1.Value = "Albachain";
        temp1.FontSize = 30f;
        temp1.TextColor = float4(1f, 1f, 1f, 1f);
        temp1.Alignment = Fuse.Elements.Alignment.Center;
        temp1.Margin = float4(0f, 0f, 80f, 100f);
        temp1.SourceLineNumber = 3;
        temp1.SourceFileName = "startPage.ux";
        temp1.Font = Fuse.Font.Bold;
        temp2.Value = "Hello Stranger !";
        temp2.FontSize = 15f;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Margin = float4(0f, 0f, 115f, 0f);
        temp2.SourceLineNumber = 4;
        temp2.SourceFileName = "startPage.ux";
        temp2.Font = Fuse.Font.Bold;
        temp3.Value = "성실한 알바를 원하는 사장님! 정당한 임금 보장을 원하는 알바님!";
        temp3.FontSize = 10f;
        temp3.TextColor = float4(1f, 1f, 1f, 1f);
        temp3.Alignment = Fuse.Elements.Alignment.Center;
        temp3.Margin = float4(20f, 40f, 0f, 0f);
        temp3.SourceLineNumber = 5;
        temp3.SourceFileName = "startPage.ux";
        temp4.Value = "Albachain에 오신 것을 환영합니다";
        temp4.FontSize = 10f;
        temp4.TextColor = float4(1f, 1f, 1f, 1f);
        temp4.Alignment = Fuse.Elements.Alignment.Center;
        temp4.Margin = float4(0f, 70f, 94f, 0f);
        temp4.SourceLineNumber = 6;
        temp4.SourceFileName = "startPage.ux";
        temp5.Value = "화면을 터치해 주세요";
        temp5.FontSize = 10f;
        temp5.TextColor = float4(1f, 1f, 1f, 1f);
        temp5.Alignment = Fuse.Elements.Alignment.BottomCenter;
        temp5.Margin = float4(0f, 0f, 0f, 30f);
        temp5.SourceLineNumber = 7;
        temp5.SourceFileName = "startPage.ux";
        temp6.SourceLineNumber = 8;
        temp6.SourceFileName = "startPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb0.OnEvent);
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/albachain01.png"));
        temp6.Bindings.Add(temp_eb0);
        temp.SourceLineNumber = 8;
        temp.SourceFileName = "startPage.ux";
        temp7.Code = "\n\t\texports.next = function () {\n\t\t\trouter.goto(\"login\");\n\t\t}\n\t";
        temp7.LineNumber = 10;
        temp7.FileName = "startPage.ux";
        temp7.SourceLineNumber = 10;
        temp7.SourceFileName = "startPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
    }
}
