[Uno.Compiler.UxGenerated]
public partial class contractCan: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<float> popup_Opacity_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<Fuse.Triggers.State> stateGroup_Active_inst;
    global::Uno.UX.Property<float4> Za_Color_inst;
    global::Uno.UX.Property<float4> ba_Color_inst;
    global::Uno.UX.Property<float4> va_Color_inst;
    global::Uno.UX.Property<float4> pa_Color_inst;
    global::Uno.UX.Property<float4> ka_Color_inst;
    internal global::Fuse.Controls.Text titleText;
    internal global::Fuse.Controls.Rectangle popup;
    internal global::Fuse.Reactive.EventBinding temp_eb30;
    internal global::mystar Za;
    internal global::mystar ba;
    internal global::mystar va;
    internal global::mystar pa;
    internal global::mystar ka;
    internal global::Fuse.Reactive.EventBinding temp_eb31;
    internal global::Fuse.Controls.Rectangle cancelbtn;
    internal global::Fuse.Reactive.EventBinding temp_eb32;
    internal global::Fuse.Triggers.StateGroup stateGroup;
    internal global::Fuse.Triggers.State noStars;
    internal global::Fuse.Triggers.State Stars1;
    internal global::Fuse.Triggers.State Stars2;
    internal global::Fuse.Triggers.State Stars3;
    internal global::Fuse.Triggers.State Stars4;
    internal global::Fuse.Triggers.State Stars5;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "titleText",
        "popup",
        "temp_eb30",
        "Za",
        "ba",
        "va",
        "pa",
        "ka",
        "temp_eb31",
        "cancelbtn",
        "temp_eb32",
        "stateGroup",
        "noStars",
        "Stars1",
        "Stars2",
        "Stars3",
        "Stars4",
        "Stars5"
    };
    static contractCan()
    {
    }
    [global::Uno.UX.UXConstructor]
    public contractCan(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        popup = new global::Fuse.Controls.Rectangle();
        popup_Opacity_inst = new albachain_FuseElementsElement_Opacity_Property(popup, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("gotoHome");
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new albachain_FuseTriggersWhileBool_Value_Property(temp, __selector1);
        var temp3 = new global::Fuse.Reactive.Data("cancelView");
        var temp1 = new global::Fuse.Controls.Text();
        temp1_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp1, __selector1);
        var temp4 = new global::Fuse.Reactive.Data("title");
        stateGroup = new global::Fuse.Triggers.StateGroup();
        stateGroup_Active_inst = new albachain_FuseTriggersStateGroup_Active_Property(stateGroup, __selector2);
        var temp5 = new global::Fuse.Reactive.Data("gotoHome");
        var temp6 = new global::Fuse.Reactive.Data("cancelToggle");
        Za = new global::mystar();
        Za_Color_inst = new albachain_FuseControlsShape_Color_Property(Za, __selector3);
        ba = new global::mystar();
        ba_Color_inst = new albachain_FuseControlsShape_Color_Property(ba, __selector3);
        va = new global::mystar();
        va_Color_inst = new albachain_FuseControlsShape_Color_Property(va, __selector3);
        pa = new global::mystar();
        pa_Color_inst = new albachain_FuseControlsShape_Color_Property(pa, __selector3);
        ka = new global::mystar();
        ka_Color_inst = new albachain_FuseControlsShape_Color_Property(ka, __selector3);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp7 = new global::Fuse.Controls.ClientPanel();
        var temp8 = new global::Fuse.Controls.Rectangle();
        var temp9 = new global::Fuse.Controls.Grid();
        var temp10 = new global::Fuse.Controls.Text();
        titleText = new global::Fuse.Controls.Text();
        var temp11 = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../Assets/Fonts/Roboto-Black.ttf")));
        var temp12 = new global::Fuse.Animations.Change<float>(popup_Opacity_inst);
        var temp13 = new global::Fuse.Controls.Panel();
        var temp14 = new global::Fuse.Controls.Text();
        var temp15 = new global::Fuse.Controls.Text();
        var temp16 = new global::Fuse.Drawing.Stroke();
        var temp17 = new global::Fuse.Gestures.Clicked();
        var temp18 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb30 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp19 = new global::Fuse.Drawing.StaticSolidColor(float4(0.9960784f, 1f, 0.9960784f, 1f));
        var temp20 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp21 = new global::Fuse.Controls.ScrollView();
        var temp22 = new global::Fuse.Controls.StackPanel();
        var temp23 = new global::Fuse.Controls.Rectangle();
        var temp24 = new global::Fuse.Controls.StackPanel();
        var temp25 = new global::Fuse.Controls.Rectangle();
        var temp26 = new global::Fuse.Controls.Circle();
        var temp27 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp28 = new global::mystar();
        var temp29 = new global::Fuse.Drawing.Stroke();
        var temp30 = new global::mystar();
        var temp31 = new global::Fuse.Drawing.Stroke();
        var temp32 = new global::mystar();
        var temp33 = new global::Fuse.Drawing.Stroke();
        var temp34 = new global::mystar();
        var temp35 = new global::Fuse.Drawing.Stroke();
        var temp36 = new global::mystar();
        var temp37 = new global::Fuse.Drawing.Stroke();
        var temp38 = new global::Fuse.Controls.Rectangle();
        var temp39 = new global::Fuse.Controls.Rectangle();
        var temp40 = new global::Fuse.Controls.Text();
        var temp41 = new global::Fuse.Controls.Rectangle();
        var temp42 = new global::Fuse.Controls.TextInput();
        var temp43 = new global::Fuse.Drawing.Stroke();
        var temp44 = new global::Fuse.Controls.Rectangle();
        var temp45 = new global::Fuse.Controls.Panel();
        var temp46 = new global::Fuse.Controls.Text();
        var temp47 = new global::Fuse.Controls.StackPanel();
        var temp48 = new global::Fuse.Gestures.Clicked();
        var temp49 = new global::Fuse.Triggers.Actions.Set<Fuse.Triggers.State>(stateGroup_Active_inst);
        var temp50 = new global::Fuse.Drawing.Stroke();
        var temp51 = new global::Fuse.Gestures.Clicked();
        var temp52 = new global::Fuse.Triggers.Actions.Set<Fuse.Triggers.State>(stateGroup_Active_inst);
        var temp53 = new global::Fuse.Drawing.Stroke();
        var temp54 = new global::Fuse.Gestures.Clicked();
        var temp55 = new global::Fuse.Triggers.Actions.Set<Fuse.Triggers.State>(stateGroup_Active_inst);
        var temp56 = new global::Fuse.Drawing.Stroke();
        var temp57 = new global::Fuse.Gestures.Clicked();
        var temp58 = new global::Fuse.Triggers.Actions.Set<Fuse.Triggers.State>(stateGroup_Active_inst);
        var temp59 = new global::Fuse.Drawing.Stroke();
        var temp60 = new global::Fuse.Gestures.Clicked();
        var temp61 = new global::Fuse.Triggers.Actions.Set<Fuse.Triggers.State>(stateGroup_Active_inst);
        var temp62 = new global::Fuse.Drawing.Stroke();
        var temp63 = new global::Fuse.Controls.Shadow();
        var temp64 = new global::Fuse.Controls.Panel();
        var temp65 = new global::Fuse.Controls.Rectangle();
        var temp66 = new global::Fuse.Controls.Text();
        var temp67 = new global::Fuse.Gestures.Clicked();
        var temp68 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb31 = new global::Fuse.Reactive.EventBinding(temp5);
        cancelbtn = new global::Fuse.Controls.Rectangle();
        var temp69 = new global::Fuse.Controls.Text();
        var temp70 = new global::Fuse.Gestures.WhilePressed();
        var temp71 = new global::Fuse.Animations.Scale();
        var temp72 = new global::Fuse.Gestures.Clicked();
        var temp73 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb32 = new global::Fuse.Reactive.EventBinding(temp6);
        noStars = new global::Fuse.Triggers.State();
        Stars1 = new global::Fuse.Triggers.State();
        var temp74 = new global::Fuse.Animations.Change<float4>(Za_Color_inst);
        Stars2 = new global::Fuse.Triggers.State();
        var temp75 = new global::Fuse.Animations.Change<float4>(Za_Color_inst);
        var temp76 = new global::Fuse.Animations.Change<float4>(ba_Color_inst);
        Stars3 = new global::Fuse.Triggers.State();
        var temp77 = new global::Fuse.Animations.Change<float4>(Za_Color_inst);
        var temp78 = new global::Fuse.Animations.Change<float4>(ba_Color_inst);
        var temp79 = new global::Fuse.Animations.Change<float4>(va_Color_inst);
        Stars4 = new global::Fuse.Triggers.State();
        var temp80 = new global::Fuse.Animations.Change<float4>(Za_Color_inst);
        var temp81 = new global::Fuse.Animations.Change<float4>(ba_Color_inst);
        var temp82 = new global::Fuse.Animations.Change<float4>(va_Color_inst);
        var temp83 = new global::Fuse.Animations.Change<float4>(pa_Color_inst);
        Stars5 = new global::Fuse.Triggers.State();
        var temp84 = new global::Fuse.Animations.Change<float4>(Za_Color_inst);
        var temp85 = new global::Fuse.Animations.Change<float4>(ba_Color_inst);
        var temp86 = new global::Fuse.Animations.Change<float4>(va_Color_inst);
        var temp87 = new global::Fuse.Animations.Change<float4>(pa_Color_inst);
        var temp88 = new global::Fuse.Animations.Change<float4>(ka_Color_inst);
        var temp89 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/individual/contractCan.ux";
        temp7.SourceLineNumber = 3;
        temp7.SourceFileName = "Pages/individual/contractCan.ux";
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp);
        temp7.Children.Add(temp21);
        temp8.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
        temp8.Alignment = Fuse.Elements.Alignment.Top;
        temp8.SourceLineNumber = 5;
        temp8.SourceFileName = "Pages/individual/contractCan.ux";
        temp8.Children.Add(temp9);
        temp9.RowCount = 1;
        temp9.ColumnCount = 3;
        temp9.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        temp9.Margin = float4(5f, 5f, 5f, 5f);
        temp9.Y = new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified);
        temp9.SourceLineNumber = 6;
        temp9.SourceFileName = "Pages/individual/contractCan.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        temp9.Children.Add(temp10);
        temp9.Children.Add(titleText);
        temp10.SourceLineNumber = 9;
        temp10.SourceFileName = "Pages/individual/contractCan.ux";
        titleText.Value = "계약해지";
        titleText.FontSize = 25f;
        titleText.TextAlignment = Fuse.Controls.TextAlignment.Center;
        titleText.TextColor = float4(0f, 0f, 0f, 1f);
        titleText.Alignment = Fuse.Elements.Alignment.Center;
        titleText.Margin = float4(0f, 0f, 0f, 0f);
        titleText.Name = __selector4;
        titleText.SourceLineNumber = 10;
        titleText.SourceFileName = "Pages/individual/contractCan.ux";
        titleText.Font = temp11;
        temp.SourceLineNumber = 18;
        temp.SourceFileName = "Pages/individual/contractCan.ux";
        temp.Animators.Add(temp12);
        temp.Nodes.Add(temp13);
        temp.Bindings.Add(temp20);
        temp12.Value = 1f;
        temp12.Duration = 1;
        temp13.Color = float4(1f, 1f, 1f, 0.4823529f);
        temp13.Width = new Uno.UX.Size(500f, Uno.UX.Unit.Unspecified);
        temp13.Height = new Uno.UX.Size(1000f, Uno.UX.Unit.Unspecified);
        temp13.SourceLineNumber = 20;
        temp13.SourceFileName = "Pages/individual/contractCan.ux";
        temp13.Children.Add(popup);
        popup.CornerRadius = float4(10f, 10f, 10f, 10f);
        popup.Width = new Uno.UX.Size(330f, Uno.UX.Unit.Unspecified);
        popup.Height = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        popup.Margin = float4(0f, 0f, 0f, 0f);
        popup.Opacity = 1f;
        popup.Name = __selector5;
        popup.SourceLineNumber = 21;
        popup.SourceFileName = "Pages/individual/contractCan.ux";
        popup.Background = temp19;
        popup.Strokes.Add(temp16);
        popup.Children.Add(temp14);
        popup.Children.Add(temp15);
        popup.Children.Add(temp17);
        temp14.Value = "계약 해지 신청이 완료되었습니다.";
        temp14.Alignment = Fuse.Elements.Alignment.TopCenter;
        temp14.Margin = float4(0f, 30f, 0f, 0f);
        temp14.SourceLineNumber = 22;
        temp14.SourceFileName = "Pages/individual/contractCan.ux";
        temp15.Value = "이 화면을 터치하면 홈으로 이동합니다.";
        temp15.FontSize = 10f;
        temp15.TextColor = float4(0.627451f, 0.627451f, 0.627451f, 1f);
        temp15.Alignment = Fuse.Elements.Alignment.BottomCenter;
        temp15.Margin = float4(0f, 0f, 0f, 20f);
        temp15.SourceLineNumber = 23;
        temp15.SourceFileName = "Pages/individual/contractCan.ux";
        temp16.Color = float4(0.3372549f, 0.6078432f, 0.7490196f, 1f);
        temp16.Width = 2f;
        temp17.SourceLineNumber = 25;
        temp17.SourceFileName = "Pages/individual/contractCan.ux";
        temp17.Actions.Add(temp18);
        temp17.Bindings.Add(temp_eb30);
        temp18.SourceLineNumber = 26;
        temp18.SourceFileName = "Pages/individual/contractCan.ux";
        temp18.Handler += temp_eb30.OnEvent;
        temp2.SourceLineNumber = 26;
        temp2.SourceFileName = "Pages/individual/contractCan.ux";
        temp3.SourceLineNumber = 18;
        temp3.SourceFileName = "Pages/individual/contractCan.ux";
        temp21.SourceLineNumber = 32;
        temp21.SourceFileName = "Pages/individual/contractCan.ux";
        temp21.Children.Add(temp22);
        temp22.Margin = float4(0f, 80f, 0f, 0f);
        temp22.SourceLineNumber = 34;
        temp22.SourceFileName = "Pages/individual/contractCan.ux";
        temp22.Children.Add(temp23);
        temp22.Children.Add(temp64);
        temp23.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp23.Color = float4(0.9960784f, 1f, 0.9960784f, 1f);
        temp23.Width = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        temp23.Height = new Uno.UX.Size(550f, Uno.UX.Unit.Unspecified);
        temp23.SourceLineNumber = 35;
        temp23.SourceFileName = "Pages/individual/contractCan.ux";
        temp23.Children.Add(temp24);
        temp23.Children.Add(temp63);
        temp24.SourceLineNumber = 36;
        temp24.SourceFileName = "Pages/individual/contractCan.ux";
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp38);
        temp24.Children.Add(temp39);
        temp24.Children.Add(temp44);
        temp24.Children.Add(temp45);
        temp25.SourceLineNumber = 37;
        temp25.SourceFileName = "Pages/individual/contractCan.ux";
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp1);
        temp25.Children.Add(temp28);
        temp25.Children.Add(temp30);
        temp25.Children.Add(temp32);
        temp25.Children.Add(temp34);
        temp25.Children.Add(temp36);
        temp26.Color = float4(0.8862745f, 0.8901961f, 0.8862745f, 1f);
        temp26.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        temp26.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        temp26.Alignment = Fuse.Elements.Alignment.Left;
        temp26.Margin = float4(30f, 20f, 0f, 0f);
        temp26.SourceLineNumber = 38;
        temp26.SourceFileName = "Pages/individual/contractCan.ux";
        temp1.FontSize = 20f;
        temp1.TextAlignment = Fuse.Controls.TextAlignment.Left;
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.Color = float4(0.2627451f, 0.2666667f, 0.2627451f, 1f);
        temp1.Margin = float4(140f, 30f, 0f, 0f);
        temp1.Padding = float4(0f, 0f, 0f, 0f);
        temp1.SourceLineNumber = 39;
        temp1.SourceFileName = "Pages/individual/contractCan.ux";
        temp1.Bindings.Add(temp27);
        temp4.SourceLineNumber = 39;
        temp4.SourceFileName = "Pages/individual/contractCan.ux";
        temp28.Margin = float4(1f, 35f, 1f, 1f);
        temp28.SourceLineNumber = 41;
        temp28.SourceFileName = "Pages/individual/contractCan.ux";
        temp28.Strokes.Add(temp29);
        temp29.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp29.Width = 1f;
        temp30.Margin = float4(35f, 35f, 1f, 1f);
        temp30.SourceLineNumber = 44;
        temp30.SourceFileName = "Pages/individual/contractCan.ux";
        temp30.Strokes.Add(temp31);
        temp31.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp31.Width = 1f;
        temp32.Margin = float4(70f, 35f, 1f, 1f);
        temp32.SourceLineNumber = 47;
        temp32.SourceFileName = "Pages/individual/contractCan.ux";
        temp32.Strokes.Add(temp33);
        temp33.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp33.Width = 1f;
        temp34.Margin = float4(105f, 35f, 1f, 1f);
        temp34.SourceLineNumber = 50;
        temp34.SourceFileName = "Pages/individual/contractCan.ux";
        temp34.Strokes.Add(temp35);
        temp35.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp35.Width = 1f;
        temp36.Margin = float4(140f, 35f, 1f, 1f);
        temp36.SourceLineNumber = 53;
        temp36.SourceFileName = "Pages/individual/contractCan.ux";
        temp36.Strokes.Add(temp37);
        temp37.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp37.Width = 1f;
        temp38.Color = float4(0.8823529f, 0.8901961f, 0.8823529f, 1f);
        temp38.Width = new Uno.UX.Size(280f, Uno.UX.Unit.Unspecified);
        temp38.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp38.Margin = float4(0f, 20f, 0f, 0f);
        temp38.SourceLineNumber = 59;
        temp38.SourceFileName = "Pages/individual/contractCan.ux";
        temp39.Margin = float4(0f, 20f, 0f, 0f);
        temp39.SourceLineNumber = 60;
        temp39.SourceFileName = "Pages/individual/contractCan.ux";
        temp39.Children.Add(temp40);
        temp39.Children.Add(temp41);
        temp40.Value = "해지 사유";
        temp40.TextColor = float4(0f, 0f, 0f, 1f);
        temp40.Alignment = Fuse.Elements.Alignment.Top;
        temp40.Margin = float4(30f, 0f, 0f, 0f);
        temp40.Padding = float4(0f, 0f, 0f, 0f);
        temp40.SourceLineNumber = 61;
        temp40.SourceFileName = "Pages/individual/contractCan.ux";
        temp41.CornerRadius = float4(10f, 10f, 10f, 10f);
        temp41.Width = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp41.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp41.Margin = float4(0f, 30f, 0f, 0f);
        temp41.SourceLineNumber = 62;
        temp41.SourceFileName = "Pages/individual/contractCan.ux";
        temp41.Strokes.Add(temp43);
        temp41.Children.Add(temp42);
        temp42.PlaceholderText = "해지사유를 적어주세요..";
        temp42.PlaceholderColor = float4(0.654902f, 0.654902f, 0.654902f, 1f);
        temp42.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        temp42.FontSize = 12f;
        temp42.Alignment = Fuse.Elements.Alignment.Default;
        temp42.Margin = float4(0f, 0f, 0f, 0f);
        temp42.SourceLineNumber = 63;
        temp42.SourceFileName = "Pages/individual/contractCan.ux";
        temp43.Color = float4(0.6f, 0.6078432f, 0.6f, 1f);
        temp43.Width = 1f;
        temp44.Color = float4(0.8823529f, 0.8901961f, 0.8823529f, 1f);
        temp44.Width = new Uno.UX.Size(280f, Uno.UX.Unit.Unspecified);
        temp44.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp44.Margin = float4(0f, 20f, 0f, 0f);
        temp44.SourceLineNumber = 68;
        temp44.SourceFileName = "Pages/individual/contractCan.ux";
        temp45.Height = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp45.Margin = float4(0f, 0f, 0f, 0f);
        temp45.SourceLineNumber = 69;
        temp45.SourceFileName = "Pages/individual/contractCan.ux";
        temp45.Children.Add(temp46);
        temp45.Children.Add(temp47);
        temp46.Value = "매장평점";
        temp46.TextColor = float4(0f, 0f, 0f, 1f);
        temp46.Alignment = Fuse.Elements.Alignment.Top;
        temp46.Margin = float4(30f, 20f, 0f, 0f);
        temp46.SourceLineNumber = 70;
        temp46.SourceFileName = "Pages/individual/contractCan.ux";
        temp47.Orientation = Fuse.Layouts.Orientation.Horizontal;
        temp47.Margin = float4(0f, 60f, 0f, 0f);
        temp47.SourceLineNumber = 71;
        temp47.SourceFileName = "Pages/individual/contractCan.ux";
        temp47.Children.Add(Za);
        temp47.Children.Add(ba);
        temp47.Children.Add(va);
        temp47.Children.Add(pa);
        temp47.Children.Add(ka);
        Za.Width = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        Za.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        Za.Alignment = Fuse.Elements.Alignment.Center;
        Za.Margin = float4(65f, 0f, 0f, 0f);
        Za.Name = __selector6;
        Za.SourceLineNumber = 72;
        Za.SourceFileName = "Pages/individual/contractCan.ux";
        Za.Strokes.Add(temp50);
        Za.Children.Add(temp48);
        temp48.SourceLineNumber = 73;
        temp48.SourceFileName = "Pages/individual/contractCan.ux";
        temp48.Actions.Add(temp49);
        temp49.Value = Stars1;
        temp49.SourceLineNumber = 74;
        temp49.SourceFileName = "Pages/individual/contractCan.ux";
        temp50.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp50.Width = 2f;
        ba.Width = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        ba.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        ba.Margin = float4(0f, 0f, 0f, 0f);
        ba.Name = __selector7;
        ba.SourceLineNumber = 78;
        ba.SourceFileName = "Pages/individual/contractCan.ux";
        ba.Strokes.Add(temp53);
        ba.Children.Add(temp51);
        temp51.SourceLineNumber = 79;
        temp51.SourceFileName = "Pages/individual/contractCan.ux";
        temp51.Actions.Add(temp52);
        temp52.Value = Stars2;
        temp52.SourceLineNumber = 80;
        temp52.SourceFileName = "Pages/individual/contractCan.ux";
        temp53.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp53.Width = 2f;
        va.Width = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        va.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        va.Margin = float4(0f, 0f, 0f, 0f);
        va.Name = __selector8;
        va.SourceLineNumber = 84;
        va.SourceFileName = "Pages/individual/contractCan.ux";
        va.Strokes.Add(temp56);
        va.Children.Add(temp54);
        temp54.SourceLineNumber = 85;
        temp54.SourceFileName = "Pages/individual/contractCan.ux";
        temp54.Actions.Add(temp55);
        temp55.Value = Stars3;
        temp55.SourceLineNumber = 86;
        temp55.SourceFileName = "Pages/individual/contractCan.ux";
        temp56.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp56.Width = 2f;
        pa.Width = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        pa.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        pa.Margin = float4(0f, 0f, 0f, 0f);
        pa.Name = __selector9;
        pa.SourceLineNumber = 90;
        pa.SourceFileName = "Pages/individual/contractCan.ux";
        pa.Strokes.Add(temp59);
        pa.Children.Add(temp57);
        temp57.SourceLineNumber = 91;
        temp57.SourceFileName = "Pages/individual/contractCan.ux";
        temp57.Actions.Add(temp58);
        temp58.Value = Stars4;
        temp58.SourceLineNumber = 92;
        temp58.SourceFileName = "Pages/individual/contractCan.ux";
        temp59.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp59.Width = 2f;
        ka.Width = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        ka.Height = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
        ka.Margin = float4(0f, 0f, 0f, 0f);
        ka.Name = __selector10;
        ka.SourceLineNumber = 96;
        ka.SourceFileName = "Pages/individual/contractCan.ux";
        ka.Strokes.Add(temp62);
        ka.Children.Add(temp60);
        temp60.SourceLineNumber = 97;
        temp60.SourceFileName = "Pages/individual/contractCan.ux";
        temp60.Actions.Add(temp61);
        temp61.Value = Stars5;
        temp61.SourceLineNumber = 98;
        temp61.SourceFileName = "Pages/individual/contractCan.ux";
        temp62.Color = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp62.Width = 2f;
        temp63.Angle = 107f;
        temp63.SourceLineNumber = 105;
        temp63.SourceFileName = "Pages/individual/contractCan.ux";
        temp64.Margin = float4(0f, 30f, 0f, 50f);
        temp64.SourceLineNumber = 108;
        temp64.SourceFileName = "Pages/individual/contractCan.ux";
        temp64.Children.Add(temp65);
        temp64.Children.Add(cancelbtn);
        temp65.CornerRadius = float4(30f, 30f, 30f, 30f);
        temp65.Color = float4(0.3921569f, 0.6431373f, 0.8039216f, 1f);
        temp65.Width = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        temp65.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp65.Alignment = Fuse.Elements.Alignment.Left;
        temp65.Margin = float4(40f, 0f, 0f, 0f);
        temp65.SourceLineNumber = 109;
        temp65.SourceFileName = "Pages/individual/contractCan.ux";
        temp65.Children.Add(temp66);
        temp65.Children.Add(temp67);
        temp66.Value = "홈으로";
        temp66.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp66.TextColor = float4(1f, 1f, 1f, 1f);
        temp66.Alignment = Fuse.Elements.Alignment.Center;
        temp66.SourceLineNumber = 110;
        temp66.SourceFileName = "Pages/individual/contractCan.ux";
        temp67.SourceLineNumber = 111;
        temp67.SourceFileName = "Pages/individual/contractCan.ux";
        temp67.Actions.Add(temp68);
        temp67.Bindings.Add(temp_eb31);
        temp68.SourceLineNumber = 112;
        temp68.SourceFileName = "Pages/individual/contractCan.ux";
        temp68.Handler += temp_eb31.OnEvent;
        temp5.SourceLineNumber = 112;
        temp5.SourceFileName = "Pages/individual/contractCan.ux";
        cancelbtn.CornerRadius = float4(30f, 30f, 30f, 30f);
        cancelbtn.Color = float4(0.6039216f, 0.6078432f, 0.6039216f, 1f);
        cancelbtn.Width = new Uno.UX.Size(130f, Uno.UX.Unit.Unspecified);
        cancelbtn.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        cancelbtn.Alignment = Fuse.Elements.Alignment.Right;
        cancelbtn.Margin = float4(0f, 0f, 40f, 0f);
        cancelbtn.Name = __selector11;
        cancelbtn.SourceLineNumber = 115;
        cancelbtn.SourceFileName = "Pages/individual/contractCan.ux";
        cancelbtn.Children.Add(temp69);
        cancelbtn.Children.Add(temp70);
        cancelbtn.Children.Add(temp72);
        temp69.Value = "계약해지";
        temp69.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp69.TextColor = float4(1f, 1f, 1f, 1f);
        temp69.Alignment = Fuse.Elements.Alignment.Center;
        temp69.SourceLineNumber = 116;
        temp69.SourceFileName = "Pages/individual/contractCan.ux";
        temp70.SourceLineNumber = 117;
        temp70.SourceFileName = "Pages/individual/contractCan.ux";
        temp70.Animators.Add(temp71);
        temp71.Factor = 0.9f;
        temp71.Duration = 0.05;
        temp71.Target = cancelbtn;
        temp72.SourceLineNumber = 120;
        temp72.SourceFileName = "Pages/individual/contractCan.ux";
        temp72.Actions.Add(temp73);
        temp72.Bindings.Add(temp_eb32);
        temp73.SourceLineNumber = 121;
        temp73.SourceFileName = "Pages/individual/contractCan.ux";
        temp73.Handler += temp_eb32.OnEvent;
        temp6.SourceLineNumber = 121;
        temp6.SourceFileName = "Pages/individual/contractCan.ux";
        stateGroup.Name = __selector12;
        stateGroup.SourceLineNumber = 131;
        stateGroup.SourceFileName = "Pages/individual/contractCan.ux";
        stateGroup.Active = noStars;
        stateGroup.States.Add(noStars);
        stateGroup.States.Add(Stars1);
        stateGroup.States.Add(Stars2);
        stateGroup.States.Add(Stars3);
        stateGroup.States.Add(Stars4);
        stateGroup.States.Add(Stars5);
        noStars.Name = __selector13;
        noStars.SourceLineNumber = 132;
        noStars.SourceFileName = "Pages/individual/contractCan.ux";
        Stars1.Name = __selector14;
        Stars1.SourceLineNumber = 133;
        Stars1.SourceFileName = "Pages/individual/contractCan.ux";
        Stars1.Animators.Add(temp74);
        temp74.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp74.Easing = Fuse.Animations.Easing.ElasticIn;
        Stars2.Name = __selector15;
        Stars2.SourceLineNumber = 136;
        Stars2.SourceFileName = "Pages/individual/contractCan.ux";
        Stars2.Animators.Add(temp75);
        Stars2.Animators.Add(temp76);
        temp75.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp75.Easing = Fuse.Animations.Easing.ElasticIn;
        temp76.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp76.Easing = Fuse.Animations.Easing.ElasticIn;
        Stars3.Name = __selector16;
        Stars3.SourceLineNumber = 140;
        Stars3.SourceFileName = "Pages/individual/contractCan.ux";
        Stars3.Animators.Add(temp77);
        Stars3.Animators.Add(temp78);
        Stars3.Animators.Add(temp79);
        temp77.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp77.Easing = Fuse.Animations.Easing.ElasticIn;
        temp78.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp78.Easing = Fuse.Animations.Easing.ElasticIn;
        temp79.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp79.Easing = Fuse.Animations.Easing.ElasticIn;
        Stars4.Name = __selector17;
        Stars4.SourceLineNumber = 145;
        Stars4.SourceFileName = "Pages/individual/contractCan.ux";
        Stars4.Animators.Add(temp80);
        Stars4.Animators.Add(temp81);
        Stars4.Animators.Add(temp82);
        Stars4.Animators.Add(temp83);
        temp80.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp80.Easing = Fuse.Animations.Easing.ElasticIn;
        temp81.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp81.Easing = Fuse.Animations.Easing.ElasticIn;
        temp82.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp82.Easing = Fuse.Animations.Easing.ElasticIn;
        temp83.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp83.Easing = Fuse.Animations.Easing.ElasticIn;
        Stars5.Name = __selector18;
        Stars5.SourceLineNumber = 151;
        Stars5.SourceFileName = "Pages/individual/contractCan.ux";
        Stars5.Animators.Add(temp84);
        Stars5.Animators.Add(temp85);
        Stars5.Animators.Add(temp86);
        Stars5.Animators.Add(temp87);
        Stars5.Animators.Add(temp88);
        temp84.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp84.Easing = Fuse.Animations.Easing.ElasticIn;
        temp85.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp85.Easing = Fuse.Animations.Easing.ElasticIn;
        temp86.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp86.Easing = Fuse.Animations.Easing.ElasticIn;
        temp87.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp87.Easing = Fuse.Animations.Easing.ElasticIn;
        temp88.Value = float4(0.3686275f, 0.627451f, 0.7882353f, 1f);
        temp88.Easing = Fuse.Animations.Easing.ElasticIn;
        temp89.Code = "\n\n\tvar Observable = require('FuseJS/Observable');\n\texports.cancelView = Observable(false);\n\n\texports.gotoHome = function(){ \n\t\texports.cancelView.value = false;\n\t\trouter.goto(\"mainviewInd\");\n\t}\n\n\texports.goBack = function()\n\t{\n\t\trouter.goBack();\n\t};\n\n\texports.title = this.Parameter.map(function(param) {\n\t\treturn param.title;\n\t});\n\n\texports.cancelToggle = function () {  exports.cancelView.value = true; };\n\n\n\t";
        temp89.LineNumber = 160;
        temp89.FileName = "Pages/individual/contractCan.ux";
        temp89.SourceLineNumber = 160;
        temp89.SourceFileName = "Pages/individual/contractCan.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(titleText);
        __g_nametable.Objects.Add(popup);
        __g_nametable.Objects.Add(temp_eb30);
        __g_nametable.Objects.Add(Za);
        __g_nametable.Objects.Add(ba);
        __g_nametable.Objects.Add(va);
        __g_nametable.Objects.Add(pa);
        __g_nametable.Objects.Add(ka);
        __g_nametable.Objects.Add(temp_eb31);
        __g_nametable.Objects.Add(cancelbtn);
        __g_nametable.Objects.Add(temp_eb32);
        __g_nametable.Objects.Add(stateGroup);
        __g_nametable.Objects.Add(noStars);
        __g_nametable.Objects.Add(Stars1);
        __g_nametable.Objects.Add(Stars2);
        __g_nametable.Objects.Add(Stars3);
        __g_nametable.Objects.Add(Stars4);
        __g_nametable.Objects.Add(Stars5);
        this.Children.Add(temp7);
        this.Children.Add(stateGroup);
        this.Children.Add(temp89);
    }
    static global::Uno.UX.Selector __selector0 = "Opacity";
    static global::Uno.UX.Selector __selector1 = "Value";
    static global::Uno.UX.Selector __selector2 = "Active";
    static global::Uno.UX.Selector __selector3 = "Color";
    static global::Uno.UX.Selector __selector4 = "titleText";
    static global::Uno.UX.Selector __selector5 = "popup";
    static global::Uno.UX.Selector __selector6 = "Za";
    static global::Uno.UX.Selector __selector7 = "ba";
    static global::Uno.UX.Selector __selector8 = "va";
    static global::Uno.UX.Selector __selector9 = "pa";
    static global::Uno.UX.Selector __selector10 = "ka";
    static global::Uno.UX.Selector __selector11 = "cancelbtn";
    static global::Uno.UX.Selector __selector12 = "stateGroup";
    static global::Uno.UX.Selector __selector13 = "noStars";
    static global::Uno.UX.Selector __selector14 = "Stars1";
    static global::Uno.UX.Selector __selector15 = "Stars2";
    static global::Uno.UX.Selector __selector16 = "Stars3";
    static global::Uno.UX.Selector __selector17 = "Stars4";
    static global::Uno.UX.Selector __selector18 = "Stars5";
}
