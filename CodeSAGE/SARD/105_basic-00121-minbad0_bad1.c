int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 10 - (10 - 1);
 VAR2 = 0;
 do
 {
 /* BAD */
 VAR3[10] = '';
 if (VAR2 >= 10) break;
 }
 while(VAR2 += VAR1);
 return 0;
}
