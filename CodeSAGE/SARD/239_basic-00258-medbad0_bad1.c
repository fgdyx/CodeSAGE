int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 char VAR4[10];
 VAR1 = 0;
 VAR2 = 17 - (17 - 1);
 VAR3 = VAR1;
 do
 {
 /* BAD */
 VAR4[VAR3] = '';
 if (VAR3 >= 17) break;
 }
 while(VAR3 += VAR2);
 return 0;
}
