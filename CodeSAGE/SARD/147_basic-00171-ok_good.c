int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 int VAR3;
 int VAR4;
 char VAR5[10];
 VAR1 = 0;
 VAR2 = 9;
 VAR3 = 9 - (9 - 1);
 VAR4 = VAR1;
 do
 {
 VAR5[9] = '';
 }
 while((VAR4 += VAR3) && (VAR4 <= VAR2));
 return 0;
}
