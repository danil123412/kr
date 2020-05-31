Unit Unit4;

interface

uses System, Unit1,System.Drawing, System.Windows.Forms;

type
  Form4 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit4.Form4.resources}
    label3: &Label;
    label2: &Label;
    textBox1: TextBox;
    button1: Button;
    {$include Unit4.Form4.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form4.button1_Click(sender: Object; e: EventArgs);
begin
  if (textBox1.Text = '1234') 
  then
  Form(new Form1).Show
  else label2.Text := 'Неверный пароль, повторите попытку:';
end;

procedure Form4.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

end.
