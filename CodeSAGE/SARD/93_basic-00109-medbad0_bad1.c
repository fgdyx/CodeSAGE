int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 17;
 VAR2 = 0;
 while(1)
 {
 /* BAD */
 VAR3[17] = '';
 VAR2++;
 if (VAR2 > VAR1) break;
 }
 return 0;
}
