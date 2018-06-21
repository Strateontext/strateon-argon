using System;
using System.Drawing;
using System.Windows.Forms;

namespace KeyboardInputForm
{
    class Form1 : Form
    {
        TextBox TextBox1 = new TextBox();
        Panel panel1 = new Panel();
        Panel panel2 = new Panel();
        Panel panel3 = new Panel();
        Panel panel4 = new Panel();
        Panel panel5 = new Panel();
        Panel panel6 = new Panel();
        Panel panel7 = new Panel();
        Panel panel8 = new Panel();
        Panel panel9 = new Panel();
        Panel panel10 = new Panel();
        Panel panel11 = new Panel();
        Panel panel12 = new Panel();
        Panel panel13 = new Panel();
        Label label1 = new Label();
        Label label2 = new Label();
        Button button1 = new Button();

        [STAThread]
        public static void Main()
        {
            Application.EnableVisualStyles();
            Application.Run(new Form1());
        }

        public Form1()
        {
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(921, 125);
            this.button1.Size = new System.Drawing.Size(100, 100);
            this.button1.MouseHover += new System.EventHandler(this.button1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(921, 25);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(44, 37);
            this.label1.TabIndex = 1;
            this.label1.Text = "score";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 26.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(1021, 23);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(103, 39);
            this.label2.TabIndex = 3;
            this.label2.Text = "...";
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel1.Controls.Add(this.panel4);
            this.panel1.Location = new System.Drawing.Point(12, 12);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(849, 26);
            this.panel1.TabIndex = 0;
            // 
            // panel4
            // 
            this.panel4.Location = new System.Drawing.Point(823, 0);
            this.panel4.Name = "panel4";
            this.panel4.Size = new System.Drawing.Size(0, 0);
            this.panel4.TabIndex = 3;
            // 
            // panel2
            // 
            this.panel2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel2.Location = new System.Drawing.Point(12, 475);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(849, 26);
            this.panel2.TabIndex = 1;
            // 
            // panel3
            // 
            this.panel3.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel3.Location = new System.Drawing.Point(12, 12);
            this.panel3.Name = "panel3";
            this.panel3.Size = new System.Drawing.Size(26, 489);
            this.panel3.TabIndex = 2;
            // 
            // panel5
            // 
            this.panel5.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel5.Location = new System.Drawing.Point(835, 12);
            this.panel5.Name = "panel5";
            this.panel5.Size = new System.Drawing.Size(26, 489);
            this.panel5.TabIndex = 3;
            // 
            // panel6
            // 
            this.panel6.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel6.Controls.Add(this.panel7);
            this.panel6.Location = new System.Drawing.Point(138, 138);
            this.panel6.Name = "panel6";
            this.panel6.Size = new System.Drawing.Size(597, 26);
            this.panel6.TabIndex = 4;
            // 
            // panel7
            // 
            this.panel7.Location = new System.Drawing.Point(823, 0);
            this.panel7.Name = "panel7";
            this.panel7.Size = new System.Drawing.Size(0, 0);
            this.panel7.TabIndex = 3;
            // 
            // panel8
            // 
            this.panel8.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel8.Controls.Add(this.panel9);
            this.panel8.Location = new System.Drawing.Point(138, 349);
            this.panel8.Name = "panel8";
            this.panel8.Size = new System.Drawing.Size(597, 26);
            this.panel8.TabIndex = 5;
            // 
            // panel9
            // 
            this.panel9.Location = new System.Drawing.Point(823, 0);
            this.panel9.Name = "panel9";
            this.panel9.Size = new System.Drawing.Size(0, 0);
            this.panel9.TabIndex = 3;
            // 
            // panel10
            // 
            this.panel10.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel10.Location = new System.Drawing.Point(138, 138);
            this.panel10.Name = "panel10";
            this.panel10.Size = new System.Drawing.Size(26, 237);
            this.panel10.TabIndex = 6;
            // 
            // panel11
            // 
            this.panel11.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(192)))), ((int)(((byte)(192)))), ((int)(((byte)(255)))));
            this.panel11.Location = new System.Drawing.Point(709, 138);
            this.panel11.Name = "panel11";
            this.panel11.Size = new System.Drawing.Size(26, 237);
            this.panel11.TabIndex = 7;
            // 
            // panel12
            // 
            this.panel12.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(128)))));
            this.panel12.Location = new System.Drawing.Point(50, 50);
            this.panel12.Name = "panel12";
            this.panel12.Size = new System.Drawing.Size(70, 44);
            this.panel12.TabIndex = 8;
            // 
            // panel13
            //
            this.panel13.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.panel13.Location = new System.Drawing.Point(676, 12);
            this.panel13.Name = "panel13";
            this.panel13.Size = new System.Drawing.Size(10, 153);
            this.panel13.TabIndex = 4;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1238, 536);
            this.ClientSize = new System.Drawing.Size(1238, 536);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.panel13);
            this.Controls.Add(this.panel12);
            this.Controls.Add(this.panel11);
            this.Controls.Add(this.panel10);
            this.Controls.Add(this.panel8);
            this.Controls.Add(this.panel6);
            this.Controls.Add(this.panel5);
            this.Controls.Add(this.panel3);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.panel1.ResumeLayout(false);
            this.panel6.ResumeLayout(false);
            this.panel8.ResumeLayout(false);
            this.ResumeLayout(false);


            this.AutoSize = true;
            this.KeyPreview = true;
            this.KeyPress += new KeyPressEventHandler(key_A_pressed);
        }

        int score = 0;
        private void button1_Click(object sender, EventArgs e)
        {
            int i = 0;
            int score = 0;
            int dX = 50;
            int dY = 50;
            while (i >= 0)
            { 

            

            while (dX < 750)
            {
                this.panel12.Location = new System.Drawing.Point(panel12.Location.X + 5, panel12.Location.Y);
                this.panel12.Size = new System.Drawing.Size(70, 44);
                System.Threading.Thread.Sleep(1);
                dX += 5;
                if ((panel12.Location.X == 675) & (panel12.Location.Y > 12 & panel12.Location.Y < 165))
                {
                    score++;
                    this.label2.Text = score.ToString();
                        label2.Refresh();
                }
            }
            dX = 50;
            while (dY < 400)
            {
                this.panel12.Location = new System.Drawing.Point(panel12.Location.X, panel12.Location.Y + 5);
                this.panel12.Size = new System.Drawing.Size(70, 44);
                System.Threading.Thread.Sleep(1);
                dY += 5;
            }
            dY = 50;
            while (dX < 750)
            {
                this.panel12.Location = new System.Drawing.Point(panel12.Location.X - 5, panel12.Location.Y);
                this.panel12.Size = new System.Drawing.Size(70, 44);
                System.Threading.Thread.Sleep(1);
                dX += 5;
            }
            dX = 50;
            while (dY < 400)
            {
                this.panel12.Location = new System.Drawing.Point(panel12.Location.X, panel12.Location.Y - 5);
                this.panel12.Size = new System.Drawing.Size(70, 44);
                System.Threading.Thread.Sleep(1);
                dY += 5;
            }
            dY = 50;

        }
    }

            
        private void key_A_pressed(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar == 119)//w
            {
                this.panel12.Location = new System.Drawing.Point(panel12.Location.X, panel12.Location.Y - 5);
                this.panel12.Size = new System.Drawing.Size(44, 70);
            }
            if (e.KeyChar == 115)//s
            {
                this.panel12.Location = new System.Drawing.Point(panel12.Location.X, panel12.Location.Y + 5);
                this.panel12.Size = new System.Drawing.Size(44, 70);
            }
            if (e.KeyChar == 100)//d
            {
                this.panel12.Location = new System.Drawing.Point(panel12.Location.X + 5, panel12.Location.Y);
                this.panel12.Size = new System.Drawing.Size(70, 44);
                
            }
            if (e.KeyChar == 97)//a
            {
               this.panel12.Location = new System.Drawing.Point(panel12.Location.X - 5, panel12.Location.Y);
               this.panel12.Size = new System.Drawing.Size(70, 44);
               
            }


            


            if ((panel12.Location.X == 675) & (panel12.Location.Y > 12 & panel12.Location.Y < 165))
            {

                score++;
                this.label2.Text = score.ToString();

            }


      

        }







        private void InitializeComponent()
        {
            this.panel13 = new System.Windows.Forms.Panel();
            this.SuspendLayout();
            // 
            // panel13
            // 
            this.panel13.Location = new System.Drawing.Point(563, 24);
            this.panel13.Name = "panel13";
            this.panel13.Size = new System.Drawing.Size(8, 444);
            this.panel13.TabIndex = 0;
            // 
            // Form1
            // 
            this.ClientSize = new System.Drawing.Size(819, 488);
            this.Controls.Add(this.panel13);
            this.Name = "Form1";
            this.ResumeLayout(false);

        }
    }
}