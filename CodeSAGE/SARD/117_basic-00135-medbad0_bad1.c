int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 0;
 VAR2 = 17;
 VAR3 = VAR1;
 while(1)
 {
 /* BAD */
 VAR4[17] = '';
 VAR3++;
 if (VAR3 > VAR2) break;
 }
 return 0;
}
