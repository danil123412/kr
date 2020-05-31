procedure InitializeComponent;
    begin
        self.raspisanietable := new System.Windows.Forms.DataGridView();
        self.Nomer := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.StOtpr := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.StPrib := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.StProm := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Klass := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Tip := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.VrOtpr := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.VrPrib := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.Money := new System.Windows.Forms.DataGridViewTextBoxColumn();
        self.readFileBtn := new System.Windows.Forms.Button();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.label3 := new System.Windows.Forms.Label();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.label4 := new System.Windows.Forms.Label();
        (System.ComponentModel.ISupportInitialize(self.raspisanietable)).BeginInit();
        self.SuspendLayout();
        // 
        // raspisanietable
        // 
        self.raspisanietable.AllowUserToAddRows := false;
        self.raspisanietable.AllowUserToDeleteRows := false;
        self.raspisanietable.ColumnHeadersHeightSizeMode := System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
        self.raspisanietable.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[9](self.Nomer, self.StOtpr, self.StPrib, self.StProm, self.Klass, self.Tip, self.VrOtpr, self.VrPrib, self.Money));
        self.raspisanietable.Location := new System.Drawing.Point(12, 12);
        self.raspisanietable.Name := 'raspisanietable';
        self.raspisanietable.ReadOnly := true;
        self.raspisanietable.Size := new System.Drawing.Size(797, 381);
        self.raspisanietable.TabIndex := 1;
        // 
        // Nomer
        // 
        self.Nomer.HeaderText := 'Номер';
        self.Nomer.Name := 'Nomer';
        self.Nomer.ReadOnly := true;
        self.Nomer.Width := 80;
        // 
        // StOtpr
        // 
        self.StOtpr.HeaderText := 'Станция отправления';
        self.StOtpr.Name := 'StOtpr';
        self.StOtpr.ReadOnly := true;
        self.StOtpr.Width := 80;
        // 
        // StPrib
        // 
        self.StPrib.HeaderText := 'Станция прибытия';
        self.StPrib.Name := 'StPrib';
        self.StPrib.ReadOnly := true;
        self.StPrib.Width := 80;
        // 
        // StProm
        // 
        self.StProm.HeaderText := 'Промежуточные станции';
        self.StProm.Name := 'StProm';
        self.StProm.ReadOnly := true;
        self.StProm.Width := 80;
        // 
        // Klass
        // 
        self.Klass.HeaderText := 'Класс';
        self.Klass.Name := 'Klass';
        self.Klass.ReadOnly := true;
        self.Klass.Width := 80;
        // 
        // Tip
        // 
        self.Tip.HeaderText := 'Тип';
        self.Tip.Name := 'Tip';
        self.Tip.ReadOnly := true;
        self.Tip.Width := 80;
        // 
        // VrOtpr
        // 
        self.VrOtpr.HeaderText := 'Время отправления';
        self.VrOtpr.Name := 'VrOtpr';
        self.VrOtpr.ReadOnly := true;
        self.VrOtpr.Width := 80;
        // 
        // VrPrib
        // 
        self.VrPrib.HeaderText := 'Время прибытия';
        self.VrPrib.Name := 'VrPrib';
        self.VrPrib.ReadOnly := true;
        self.VrPrib.Width := 80;
        // 
        // Money
        // 
        self.Money.HeaderText := 'Цена';
        self.Money.Name := 'Money';
        self.Money.ReadOnly := true;
        self.Money.Width := 80;
        // 
        // readFileBtn
        // 
        self.readFileBtn.Location := new System.Drawing.Point(12, 399);
        self.readFileBtn.Name := 'readFileBtn';
        self.readFileBtn.Size := new System.Drawing.Size(89, 63);
        self.readFileBtn.TabIndex := 5;
        self.readFileBtn.Text := 'Считать из файла';
        self.readFileBtn.UseVisualStyleBackColor := true;
        self.readFileBtn.Click += readFileBtn_Click;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(107, 399);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(89, 63);
        self.button1.TabIndex := 6;
        self.button1.Text := 'Поиск';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(297, 399);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(89, 63);
        self.button2.TabIndex := 7;
        self.button2.Text := 'Самый дешёвый билет';
        self.button2.UseVisualStyleBackColor := true;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(202, 399);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(89, 63);
        self.button3.TabIndex := 8;
        self.button3.Text := 'Альтернативный путь';
        self.button3.UseVisualStyleBackColor := true;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(392, 399);
        self.textBox2.Multiline := true;
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(89, 33);
        self.textBox2.TabIndex := 10;
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(487, 399);
        self.textBox1.Multiline := true;
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(89, 33);
        self.textBox1.TabIndex := 11;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(392, 439);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(89, 23);
        self.label1.TabIndex := 12;
        self.label1.Text := 'Пункт А';
        // 
        // label2
        // 
        self.label2.Location := new System.Drawing.Point(487, 439);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(89, 23);
        self.label2.TabIndex := 13;
        self.label2.Text := 'Пункт В';
        // 
        // label3
        // 
        self.label3.BackColor := System.Drawing.SystemColors.ControlDark;
        self.label3.Location := new System.Drawing.Point(677, 399);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(132, 63);
        self.label3.TabIndex := 14;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(582, 399);
        self.textBox3.Multiline := true;
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(89, 33);
        self.textBox3.TabIndex := 15;
        // 
        // label4
        // 
        self.label4.Location := new System.Drawing.Point(582, 439);
        self.label4.Name := 'label4';
        self.label4.Size := new System.Drawing.Size(89, 23);
        self.label4.TabIndex := 16;
        self.label4.Text := 'Номер поезда';
        // 
        // Form3
        // 
        self.ClientSize := new System.Drawing.Size(821, 467);
        self.Controls.Add(self.label4);
        self.Controls.Add(self.textBox3);
        self.Controls.Add(self.label3);
        self.Controls.Add(self.label2);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.textBox2);
        self.Controls.Add(self.button3);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.readFileBtn);
        self.Controls.Add(self.raspisanietable);
        self.Name := 'Form3';
        self.Text := 'Form3';
        self.Load += Form3_Load;
        (System.ComponentModel.ISupportInitialize(self.raspisanietable)).EndInit();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
