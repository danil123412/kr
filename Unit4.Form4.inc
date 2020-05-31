procedure InitializeComponent;
    begin
        self.label3 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // label3
        // 
        self.label3.BackColor := System.Drawing.SystemColors.ButtonShadow;
        self.label3.Location := new System.Drawing.Point(63, 75);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(154, 24);
        self.label3.TabIndex := 8;
        self.label3.Text := 'Введите пароль:';
        // 
        // label2
        // 
        self.label2.BackColor := System.Drawing.SystemColors.ButtonShadow;
        self.label2.Location := new System.Drawing.Point(63, 125);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(154, 41);
        self.label2.TabIndex := 7;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(63, 102);
        self.textBox1.Name := 'textBox1';
        self.textBox1.PasswordChar := '*';
        self.textBox1.Size := new System.Drawing.Size(154, 20);
        self.textBox1.TabIndex := 6;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(63, 182);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(153, 52);
        self.button1.TabIndex := 9;
        self.button1.Text := 'Ввести';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // Form4
        // 
        self.ClientSize := new System.Drawing.Size(284, 261);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.textBox1);
        self.Name := 'Form4';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
