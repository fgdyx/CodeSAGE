int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 0;
 VAR2 = VAR1;
 while(++VAR2)
 {
 /* BAD */
 VAR3[17] = '';
 if (VAR2 >= 17) break;
 }
 return 0;
}
