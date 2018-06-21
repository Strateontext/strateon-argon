using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication11
{
    public partial class Form1 : Form
    {
        
        public Form1()
        {
            InitializeComponent();
            cursor_reset();
            timer1.Start();





        }

        private void finish()
        {
            timer1.Stop();
            count = 0;
            DialogResult result = MessageBox.Show("Good job ! ", "Win", MessageBoxButtons.OKCancel, MessageBoxIcon.Information);
            switch (result)
            {
                case DialogResult.OK:
                    cursor_reset();
                    break;
                case DialogResult.Cancel:
                    Application.Exit();
                    break;
            }
        }

        private void cursor_reset()
        {
            this.Cursor = new Cursor(Cursor.Current.Handle);
            Cursor.Position = new Point(240,1000);
            Cursor.Clip = new Rectangle(this.Location, this.Size);
            this.Cursor = System.Windows.Forms.Cursors.Cross;
            timer1.Start();
        }


        private void dialog_create()
        {
            timer1.Stop();
            count = 0;
            DialogResult result = MessageBox.Show("Would you restart ?","Game Over",MessageBoxButtons.YesNo,MessageBoxIcon.Stop);
            
            switch (result)
            {
                case DialogResult.Yes:
                    cursor_reset();
                    break;
                case DialogResult.No:
                    Application.Exit();
                    break;
                            }


        }

       
        private void button5_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }

        
        private void button2_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }

        private void button1_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
        }

        private void button4_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }

        private void button3_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button6_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button7_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button8_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button9_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button10_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button21_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button11_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button12_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button13_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button14_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button15_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button16_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button17_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button18_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button19_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }
        private void button20_Hover(object sender, EventArgs e)
        {
            dialog_create();
        }

        private void button21_Click(object sender, EventArgs e)
        {
            finish();
            
        }

        int count;

       private void timer1_Tick(object sender, EventArgs e)

        {

            count++;

            this.label2.Text = count.ToString();


         

        }

        
    }
}
