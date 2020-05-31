Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure createDataBtn_Click(sender: Object; e: EventArgs);
    procedure addUserBtn_Click(sender: Object; e: EventArgs);
    procedure deleteBtn_Click(sender: Object; e: EventArgs);
    procedure readFromFileBtn_Click(sender: Object; e: EventArgs);
    procedure SaveInFileBtn_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    rasppoezdovtable: DataGridView;
    createDataBtn: Button;
    addUserBtn: Button;
    deleteBtn: Button;
    readFromFileBtn: Button;
    NomerBox: TextBox;
    StOtprBox: TextBox;
    StPribBox: TextBox;
    StPromBox: TextBox;
    KlassBox: TextBox;
    TipBox: TextBox;
    VrOtprBox: TextBox;
    VrPribBox: TextBox;
    MoneyBox: TextBox;
    Nomer: DataGridViewTextBoxColumn;
    StOtpr: DataGridViewTextBoxColumn;
    StPrib: DataGridViewTextBoxColumn;
    StProm: DataGridViewTextBoxColumn;
    Klass: DataGridViewTextBoxColumn;
    Tip: DataGridViewTextBoxColumn;
    VrOtpr: DataGridViewTextBoxColumn;
    VrPrib: DataGridViewTextBoxColumn;
    Money: DataGridViewTextBoxColumn;
    SaveInFileBtn: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
type User = record
  Nomer:string;
  StOtpr:string;
  StPrib:string;
  StProm:string;
  Klass:string;
  tip:string;
  VrOtpr:string;
  VrPrib:string;
  Money:string;
end;

procedure Form1.createDataBtn_Click(sender: Object; e: EventArgs);
var
  users: array [0..8] of User;
  i:integer;
begin
  users[0].Nomer:='1';
  users[0].StOtpr:='Москва';
  users[0].StPrib:='Рязань';
  users[0].StProm:='Дивово';
  users[0].Klass:='1';
  users[0].Tip:='Пас';
  users[0].VrOtpr:='2100';
  users[0].VrPrib:='2200';
  users[0].Money:='100';
  rasppoezdovtable.RowCount :=9;
  for i:=0 to 8 do begin
    rasppoezdovtable.Rows[i].Cells[0].Value:=users[i].Nomer;
    rasppoezdovtable.Rows[i].Cells[1].Value:=users[i].StOtpr;
    rasppoezdovtable.Rows[i].Cells[2].Value:=users[i].StPrib;
    rasppoezdovtable.Rows[i].Cells[3].Value:=users[i].StProm;
    rasppoezdovtable.Rows[i].Cells[4].Value:=users[i].Klass;
    rasppoezdovtable.Rows[i].Cells[5].Value:=users[i].Tip;
    rasppoezdovtable.Rows[i].Cells[6].Value:=users[i].VrOtpr;
    rasppoezdovtable.Rows[i].Cells[7].Value:=users[i].VrPrib;
    rasppoezdovtable.Rows[i].Cells[8].Value:=users[i].Money;
  end;
end;
procedure Form1.addUserBtn_Click(sender: Object; e: EventArgs);
begin
    rasppoezdovtable.Rows.Add(NomerBox.Text,StOtprBox.Text,StPribBox.Text,StPromBox.Text,KlassBox.Text,TipBox.Text,VrOtprBox.Text,VrPribBox.Text,MoneyBox.Text);
end;

procedure Form1.deleteBtn_Click(sender: Object; e: EventArgs);
begin
    foreach item: DataGridViewRow in rasppoezdovtable.SelectedRows do 
      rasppoezdovtable.Rows.RemoveAt(item.Index);
end;

procedure Form1.readFromFileBtn_Click(sender: Object; e: EventArgs);
var
  dataFile: PABCSystem.Text;
  Nomer, StOtpr, StPrib, StProm, Klass, Tip, VrOtpr, VrPrib, Money:string;
begin
  assign(dataFile, 'raspisanie-file.txt'); 
  reset(dataFile);
  rasppoezdovtable.RowCount :=0;
  while not(EOF(dataFile)) do begin
    readln(dataFile, Nomer);
    readln(dataFile, StOtpr);
    readln(dataFile, StPrib);
    readln(dataFile, StProm);
    readln(dataFile, Klass);
    readln(dataFile, Tip);
    readln(dataFile, VrOtpr);
    readln(dataFile, VrPrib);
    readln(dataFile, Money);
    rasppoezdovtable.Rows.Add(Nomer, StOtpr, StPrib, StProm, Klass, Tip, VrOtpr, VrPrib, Money);
  end;
CloseFile(dataFile);
end;

procedure Form1.SaveInFileBtn_Click(sender: Object; e: EventArgs);
Var
  dataFile:PABCSystem.Text;
  i, count:integer;
begin
  assign(dataFile, 'raspisanie-file.txt'); 
  rewrite(dataFile);
  count:= rasppoezdovtable.RowCount;
  for i:=1 to count-1 do begin
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[0].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[1].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[2].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[3].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[4].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[5].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[6].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[7].Value.ToString());
    writeln(dataFile, rasppoezdovtable.Rows[i].Cells[8].Value.ToString());
  end;
CloseFile(dataFile);
end;

end.
