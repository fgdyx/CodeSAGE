int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 17;
 VAR2 = 17 - (17 - 1);
 VAR3 = 0;
 do
 {
 /* BAD */
 VAR4[VAR3] = '';
 VAR3 += VAR2;
 if (VAR3 > VAR1) break;
 }
 while(1);
 return 0;
}
