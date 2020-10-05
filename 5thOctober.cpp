class Solution:
    def bitwiseComplement(self, N: int) -> int:
        s=bin(N)
        s=s[2:]
        t=""
        for i in s:
            if i=='0':
                t+='1'
            else:
                t+='0'
        return int(t,2)
