int main(int argc, char *argv[])
{
 int VAR1;
 int VAR2;
 char VAR3[10];
 VAR1 = 10 - (10 - 1);
 VAR2 = 0;
 while((VAR2 += VAR1) && (VAR2 <= 10))
 {
 /* BAD */
 VAR3[VAR2] = '';
 }
 return 0;
}
