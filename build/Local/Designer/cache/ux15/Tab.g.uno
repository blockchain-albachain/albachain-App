[Uno.Compiler.UxGenerated]
public partial class Tab: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    static Tab()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Tab()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new albachain_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, albachain_accessor_Tab_Text.Singleton);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp4 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7411765f, 0.7647059f, 0.7803922f, 1f));
        this.Margin = float4(0f, 0f, 0f, 4f);
        this.ClipToBounds = false;
        this.SourceLineNumber = 7;
        this.SourceFileName = "Pages/login.ux";
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 9;
        temp.SourceFileName = "Pages/login.ux";
        temp.Font = global::login.RobotoMedium;
        temp.Bindings.Add(temp3);
        temp2.SourceLineNumber = 9;
        temp2.SourceFileName = "Pages/login.ux";
        temp1.SourceLineNumber = 9;
        temp1.SourceFileName = "Pages/login.ux";
        this.Background = temp4;
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
