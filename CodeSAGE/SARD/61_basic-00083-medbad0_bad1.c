int main(int argc, char *argv[])
{
 int VAR1;
 char VAR2[10];
 VAR1 = 0;
 while(1)
 {
 /* BAD */
 VAR2[17] = '';
 VAR1++;
 if (VAR1 > 17) break;
 }
 return 0;
}
