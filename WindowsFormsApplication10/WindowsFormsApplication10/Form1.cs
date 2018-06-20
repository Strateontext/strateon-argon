using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication10
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            

        }



        int count = 0;

        int nb = 1;
        private void button1_Click(object sender, EventArgs e)
        {

            timer1.Start();
            count = 0;
            Random rX = new Random();
            System.Threading.Thread.Sleep(1);
            Random rY = new Random();
            int X = rX.Next(10, 1800);
            int Y = rY.Next(10, 960);


            button1.Location = new System.Drawing.Point(X, Y);

            nb += 1;
            this.label1.Text = nb.ToString();

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            

        }

        private void button2_Click(object sender, EventArgs e)
        {
            nb -= 1;
            this.label1.Text = nb.ToString();

            Random rX2 = new Random();
            System.Threading.Thread.Sleep(1);
            Random rY2 = new Random();
            int X2 = rX2.Next(10, 1800);
            int Y2 = rY2.Next(10, 960);


            button1.Location = new System.Drawing.Point(X2, Y2);

        }

        
        private void timer1_Tick(object sender, EventArgs e)
        {
            count++;
            this.label4.Text = count.ToString();



            if (count == 15)
            {
                button1.Hide();
                button2.Hide();
                MessageBox.Show("Temps écoulé !" + "votre score :" + nb, "Timer messagebox");
                timer1.Stop();


                count = 0;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {


            count = 0;
            nb = 0;
            this.label1.Text = nb.ToString();
            this.label4.Text = count.ToString();
            button1.Hide();
            button1.Location = new System.Drawing.Point(286, 289);
            button1.Show();

            
        }
    }
}
