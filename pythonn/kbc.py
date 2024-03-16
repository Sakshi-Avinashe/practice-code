# Define a list of questions and answers (you can add more questions)
questions = [
    {
        "question": "What is the capital of France?",
        "answer": "Paris"
    },
    {
        "question": "Which planet is closest to the Sun?",
        "answer": "Mercury"
    },
    {
        "question": "What is 2 + 2?",
        "answer": "4"
    }
]

def ask_question(question, answer):
    user_answer = input(question + " ").strip()
    if user_answer.lower() == answer.lower():
        print("Correct!\n")
        return True
    else:
        print("Incorrect. The correct answer is:", answer, "\n")
        return False

def main():
    score = 0
    print("Welcome to the Quiz!")
    for q in questions:
        if ask_question(q["question"], q["answer"]):
            score += 1
    print("Your final score is:", score, "out of", len(questions))

if __name__ == "__main__":
    main()
