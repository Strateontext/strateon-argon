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

            MessageBox.Show("Click on start to begin a game", "Welcome !");
            level = 0;
        }

            int count = 0;
            int nb = 1;
            int level;
        private void button1_Click(object sender, EventArgs e)
        {
            if (level == 0)
            {
                MessageBox.Show("Chose your level difficulty", "Level difficulty");
                
            }
            else
            {
                
                Random rb = new Random();
                System.Threading.Thread.Sleep(1);
                Random gb = new Random();
                System.Threading.Thread.Sleep(1);
                Random bb = new Random();
                    int R = rb.Next(0, 255);
                    int G = gb.Next(0, 255);
                    int B = bb.Next(0, 255);
                Color rgbabutton = Color.FromArgb(R, G, B);
                button1.BackColor = rgbabutton;
                timer1.Start();
                timer2.Start();
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
        }

        private void Form1_Load(object sender, EventArgs e)
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
            if (count == level)
            {
                button1.Hide();               
                MessageBox.Show("Time is up !" + "    Your score :" + nb, "Timer messagebox");
                timer1.Stop();
                level = 0;
                count = 0;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (level == 0)
            {
                MessageBox.Show("Chose your level difficulty", "Level difficulty");
            }         
            count = 0;
            nb = 0;
            this.label1.Text = nb.ToString();
            this.label4.Text = count.ToString();
            button1.Hide();
            button1.Location = new System.Drawing.Point(286, 289);
            button1.Show();          
        }
        private void button4_Click(object sender, EventArgs e)
        {
            level = 20;
        }
        private void button5_Click(object sender, EventArgs e)
        {
            level = 15;
        }
        private void button6_Click(object sender, EventArgs e)
        {
            level = 10;
        }
    }
}
