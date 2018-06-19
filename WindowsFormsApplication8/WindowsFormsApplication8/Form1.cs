using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication8
{
    public partial class refd : Form
    {
        public refd()
        {
            InitializeComponent();
        }

        private void saveToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void refd_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            
            toolStrip1.Show();
        }
        private void button1_hover(object sender, EventArgs e)
        {
            
            toolStrip1.Hide();
        }



        private void button2_Click(object sender, EventArgs e)
        {

            richTextBox1.Show();

        }
        private void button2_hover(object sender, EventArgs e)
        {
            
            richTextBox1.Hide();
        }

        private void toolStrip1_ItemClicked(object sender, ToolStripItemClickedEventArgs e)
        {

        }
    }
}
