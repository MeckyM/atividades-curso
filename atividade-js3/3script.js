document.addEventListener("DOMContentLoaded", () => {
    const botaoConfirmar = document.querySelector(".confirm");

    botaoConfirmar.addEventListener("click", () => {
        // Obtém os valores dos inputs
        const valor1 = parseFloat(document.querySelector(".num1").value);
        const valor2 = parseFloat(document.querySelector(".num2").value);
        const valor3 = parseFloat(document.querySelector(".num3").value);

        // Verifica se os valores fornecidos são números válidos
        if (isNaN(valor1) || isNaN(valor2) || isNaN(valor3)) {
            alert("Por favor, insira números válidos em todos os campos.");
            return;
        }

        // Determina o maior número
        const maiorNumero = Math.max(valor1, valor2, valor3);

        // Exibe o resultado em um alerta
        alert("O maior número é: " + maiorNumero);
    });
});